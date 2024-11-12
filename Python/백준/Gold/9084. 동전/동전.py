# 9084 동전

# 우리나라 화폐단위 1 5 450 100 500

def cal(coin_num, coins, done):
    total = 0
    dp = [0]*(done+1)
    dp[0] = 1 # 어떤 화폐든 0개를 내면 0원이므로 1가지 방법 무조건 존재

    for co in coins:
        for i in range(1,done+1):
            if i>= co:
                dp[i] += dp[i-co]

    print(dp[done])
    

n = int(input())

for _ in range(n):
    coin_num = int(input())
    coins = list(map(int, input().split()))
    done = int(input())

    cal(coin_num, coins, done)
    