#include <iostream>  
#include <vector>
using namespace std;

// 퇴사2 

int main() {
    long long n, result;
    cin >> n;

    vector<int> t(n + 1);
    vector<int> p(n + 1);
    vector<long long> dp(n + 2, 0); 

    for (int i = 1; i <= n; i++) {
        cin >> t[i] >> p[i];
    }

    for (int i = n; i >= 1; i--) {
        if (i + t[i] <= n + 1) {
            dp[i] = max(p[i] + dp[i + t[i]], dp[i + 1]);  // 상담함 vs 안 함
        } else {
            dp[i] = dp[i + 1];  // 상담 불가능
        }
    }
    cout << dp[1];
}
