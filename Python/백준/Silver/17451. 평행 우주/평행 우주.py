# 평행우주
# 행성 1 2 ... n-1 을 순서대로 확인 하고 지구에 돌아오는 비용

# 초고속 걷기 기계  # 지구 벗어나면 속도 떨어뜨릴 수만 있음
# 지구에서 올려야 하는 속도 최소화

n = int(input())
nums = list(map(int, input().split()))
speed = nums[-1]

for i in range(n-2, -1,-1):
    if nums[i] > speed:
        speed = nums[i]
    else:
        if speed%nums[i]:
            speed = (speed//nums[i]+1)*nums[i]

print(speed)
