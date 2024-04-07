N = int(input())
tester = list(map(int, input().split()))
a,b = map(int, input().split())

total = 0
for i in range(N):
    tester[i] -= a
    total += 1
    if tester[i] > 0:
        if tester[i]%b == 0:
            total += (tester[i])//b
        else:
            total += tester[i]//b+1

print(total)