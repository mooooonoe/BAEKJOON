# 백준 10989 # 계수 정렬을 상툥해야 한다..!

import sys
input = sys.stdin.readline

n = int(input())
arr = [0] * (10000 + 1)

for _ in range(n):
    arr[int(input())] += 1


for i in range(len(arr)):
    if arr[i] != 0: 
        #0이 아닌 데이터, 즉 입력받은 데이터들을 출력
        for _ in range(arr[i]):
            print(i)