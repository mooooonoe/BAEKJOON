# 백준 2750

n = int(input())
arr = []

for i in range(n):
    tmp = int(input())
    arr.append(tmp)

arr.sort()
for num in arr:
    print(num)