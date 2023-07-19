#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int dp[11] = { 0, };

	dp[1] = 1;
	dp[2] = 2;
	dp[3] = 4;

	for (int i = 4; i < 11; i++) {
		dp[i] = dp[i - 1] + dp[i - 2] + dp[i - 3];
	}

	int T, num;
	scanf("%d", &T);

	for (int i = 0; i < T; i++) {
		scanf("%d", &num);
		printf("%d\n", dp[num]);
	}
	
	return 0;
}

//점화식
//f(n) = f(n-1) + f(n-2) + f(n-3) (단, n>3)
