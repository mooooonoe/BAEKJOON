num = input()
num2str = int(num)

for i in range(1, num2str + 1):
    for j in range(i):
        print('*', end='')
    print()
