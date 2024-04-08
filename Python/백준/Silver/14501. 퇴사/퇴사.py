day = int(input())
arrT = []
arrP = []

for i in range(day):
    T,P = map(int, input().split())
    arrT.append(T)
    arrP.append(P)

# print(arrT, arrP)
# dp = [0 for i in range(day+1)]

dp = [0]*(day+1)
max_value = 0

for i in range(day-1, -1, -1):
    if arrT[i]+i <= day:
        dp[i] = max(arrP[i] + dp[i+arrT[i]], max_value)
        max_value = dp[i]
    else:
        dp[i] = max_value

print(max_value)