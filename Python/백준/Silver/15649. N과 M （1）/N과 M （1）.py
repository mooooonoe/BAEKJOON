# 15649 n과 m

from itertools import permutations

n, m = map(int, input().split())
for c in permutations(range(1,n+1), m):
    # print(c)
    c_len = len(c)
    for i in range(c_len):
        print(c[i], end = ' ')
    print()