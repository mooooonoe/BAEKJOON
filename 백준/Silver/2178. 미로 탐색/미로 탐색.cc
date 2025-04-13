#include <iostream>
#include <vector>
#include <queue>
using namespace std;

// n*m 크기의 배열로 표현되는 미로
// 미로에서 1은 이동할 수 있는 칸 

// 서로 인접한 칸으로만 이동 가능 

// 15칸을 지나서 (m,m) 위치로 이동 가능 // 최소 칸 수

int v[100][100] = {0};
queue<pair<int,int>> q;

// 상 하 좌 우
int dx[] = {-1, 1, 0, 0};
int dy[] = {0, 0, -1, 1};


// *** visited 배열 따로 사용하기, 칸수 덮어 쓰기
// 최소 칸수

// void bfs(int nx, int ny){

//     for(int dir=0; dir<4; dir++){
//         nx += dx[dir];
//         ny += dy[dir];

//         if(v[nx][ny]==1){
//             // q.push_back({nx,ny}) // queue 는 push 사용 // while(!q.empty())ㄴ

//         }
//     }

// }

void bfs(int startX, int startY, int n, int m){
    q.push({startX, startY});

    while(!q.empty()){
        int x = q.front().first;
        int y = q.front().second;
        q.pop();

        for(int dir=0; dir<4; dir++){
            int nx = x + dx[dir];
            int ny = y + dy[dir];

            if(nx<0 || ny<0 || nx >=n || ny >= m) continue;

            if(v[nx][ny] != 1) continue;

            v[nx][ny] = v[x][y] + 1;
            q.push({nx, ny});
        }
    }
}

int main(void){
    // freopen("input.txt", "r", stdin);
    
    int n,m;
    cin >> n >> m;


    for(int i=0;i<n;i++){
        // for(int j=0;j<m;j++){
        //     cin >> v[i][j];
        // }
        string row;
        cin >> row; // 한 줄 전체 입력 받음
        for(int j = 0; j < m; j++){
            v[i][j] = row[j] - '0'; // '1' → 1로 변환
        }
    }

    // for(int i=0;i<n;i++){
    //     for(int j=0;j<m;j++){
    //         cout << v[i][j];
    //     }
    //     cout << '\n';
    // }

    bfs(0,0,n,m);

    cout << v[n-1][m-1] << '\n';

    return 0;
}