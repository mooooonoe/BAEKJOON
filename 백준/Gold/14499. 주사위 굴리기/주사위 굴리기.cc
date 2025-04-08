#include <iostream>  
#include <vector>
using namespace std;

// 주사위

int n, m, x, y, k;
vector<vector<int>> board;
vector<int> op_num;

int dx[4] = {0, 0, -1, 1}; // 동, 서, 북, 남
int dy[4] = {1, -1, 0, 0};

vector<int> rect(6, 0); // [윗, 북, 동, 서, 남, 밑]

void turn(int dir){
    int a = rect[0], b = rect[1], c = rect[2];
    int d = rect[3], e = rect[4], f = rect[5];

    if (dir == 1) { // 동
        rect[0] = d;
        rect[2] = a;
        rect[3] = f;
        rect[5] = c;
    } 
    else if (dir == 2) { // 서
        rect[0] = c;
        rect[2] = f;
        rect[3] = a;
        rect[5] = d;
    } 
    else if (dir == 3) { // 북
        rect[0] = e;
        rect[1] = a;
        rect[4] = f;
        rect[5] = b;
    } 
    else if (dir == 4) { // 남
        rect[0] = b;
        rect[1] = f;
        rect[4] = a;
        rect[5] = e;
    }
}

int main() {

    cin >> n >> m >> x >> y >> k;

    board.resize(n, vector<int>(m));

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m ; j++){
            cin >> board[i][j];
        }
    }

    op_num.resize(k);
    for(int i = 0; i < k; i++){
        cin >> op_num[i];
    }

    int nx = x, ny = y;

    for(int i = 0; i < k; i++){
        int dir = op_num[i];

        int tx = nx + dx[dir - 1];
        int ty = ny + dy[dir - 1];

        if (tx < 0 || tx >= n || ty < 0 || ty >= m){
            continue;
        }

        nx = tx;
        ny = ty;

        turn(dir);

        if (board[nx][ny] == 0){
            board[nx][ny] = rect[5];
        }
        else{
            rect[5] = board[nx][ny];
            board[nx][ny] = 0;
        }

        cout << rect[0] << '\n';
    }

    return 0;
}
