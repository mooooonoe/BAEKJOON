#include <iostream>
#include <vector>

using namespace std;

// 웜바이러스 네트워크를 통해 전파됨

// 7대의 컴퓨터가 네트워크 상에서 연결 됨
// 첫번째 부터 // 네트워크 상에서 연결 된 컴퓨터의 쌍 

vector<vector<int>> v(101);
bool visited[101]; // 1번부터 시작이므로 0은 안 씀

void dfs(int cur) {
    visited[cur] = true;
    for (int next : v[cur]) {
        if (!visited[next]) {
            dfs(next);
        }
    }
}

int main() {
    int n, p;
    cin >> n >> p;

    for (int i = 0; i < p; i++) {
        int a, b;
        cin >> a >> b;
        v[a].push_back(b);
        v[b].push_back(a); // 양방향 연결
    }

    dfs(1); // 1번 컴퓨터에서 시작

    int cnt = 0;
    for (int i = 2; i <= n; i++) { // 1번 제외
        if (visited[i]) cnt++;
    }

    cout << cnt << '\n';
    return 0;
}
