#include <iostream>
using namespace std;

int n;
int board[17][17];
long long dp[17][17][3]; 
// 0: 가로, 1: 세로, 2: 대각선

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    cin >> n;
    for(int i=1; i<=n; i++)
        for(int j=1; j<=n; j++)
            cin >> board[i][j];

    // 초기값: (1,1)-(1,2) 위치에 가로 파이프 존재
    dp[1][2][0] = 1;

    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            if(board[i][j] == 1) continue; // 벽이면 건너뜀

            // 가로 → 가로
            dp[i][j][0] += dp[i][j-1][0];
            // 대각선 → 가로
            dp[i][j][0] += dp[i][j-1][2];

            // 세로 → 세로
            dp[i][j][1] += dp[i-1][j][1];
            // 대각선 → 세로
            dp[i][j][1] += dp[i-1][j][2];

            // 대각선 조건 (가로, 세로, 대각 다 비어야 함)
            if(board[i-1][j] == 0 && board[i][j-1] == 0){
                dp[i][j][2] += dp[i-1][j-1][0];
                dp[i][j][2] += dp[i-1][j-1][1];
                dp[i][j][2] += dp[i-1][j-1][2];
            }
        }
    }

    // 세 가지 방향의 끝나는 경우 모두 더하기
    cout << dp[n][n][0] + dp[n][n][1] + dp[n][n][2] << '\n';

    return 0;
}
