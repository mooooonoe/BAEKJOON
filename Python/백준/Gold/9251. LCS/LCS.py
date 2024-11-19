a_str = input()
b_str = input()

# LCS 알고리즘을 위한 2차원 DP 테이블 초기화
dp = [[0] * (len(b_str) + 1) for _ in range(len(a_str) + 1)]

# DP 테이블 채우기
for i in range(1, len(a_str) + 1):
    for j in range(1, len(b_str) + 1):
        if a_str[i-1] == b_str[j-1]:  # 같다면
            dp[i][j] = dp[i-1][j-1] + 1  # 대각선 위의 값 + 1
        else:
            dp[i][j] = max(dp[i-1][j], dp[i][j-1])  # 위 or 왼쪽 중 더 큰 값

# 최종 결과 출력
print(dp[len(a_str)][len(b_str)])
