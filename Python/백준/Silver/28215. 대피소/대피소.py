# 28215 대피소
# 브루트포스 

# 2차원 평면의 KOI 마을에 n 개의 집
# i번째 집과 j 번째 집 사이 거리 .. 
# 두집 사이 거리는 x차 y차 합

# n 마을의 집 수 # k 설치할 대피소 수
# 목표 : 대피소 설치하는 모든 방법 중 가장 가까운 대피소와 집 사이 거리 중 가장 큰값이 가장 작을때의 거리 

from itertools import combinations

n, k = map(int, input().split())
x = [0]*n
y = [0]*n

for i in range(n):
    x[i], y[i] = map(int, input().split())

INF = float("INF")

def dist(c):
    ret = 0
    for id in range(n):
        a = INF
        for c_id in c:
            tmp = abs(x[id]- x[c_id]) + abs(y[id]- y[c_id])
            a = min(a, tmp)
        ret = max(ret, a)

    return ret

final = INF

for c in combinations(range(n), k):
    final = min(final, dist(c))

print(final)

