n, k = map(int, input().split())
carr = list(map(int, input().split()))

# 첫 번째 구간의 합 계산
current_sum = sum(carr[:k])
max_sum = current_sum

# 슬라이딩 윈도우로 구간합 갱신
for i in range(1, n - k + 1):
    current_sum = current_sum - carr[i - 1] + carr[i + k - 1]
    max_sum = max(max_sum, current_sum)

print(max_sum)
