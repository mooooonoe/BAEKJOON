# 15486 퇴사 2

n = int(input())
data = [list(map(int, input().split())) for _ in range(n)]
dp = [0]*(n+1)

profit = 0

for i in range(n):
    profit = max(profit, dp[i])
    
    if i + data[i][0] >n:
        continue

    dp[i+data[i][0]] = max(profit + data[i][1], dp[i+data[i][0]])

print(max(dp))