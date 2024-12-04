# 15650 n과 m (2)
from itertools import combinations

n, m = map(int, input().split())
for c in combinations(range(1,n+1), m):
    # print(c)
    c_len = len(c)
    for i in range(c_len):
        print(c[i], end = ' ')
    print()