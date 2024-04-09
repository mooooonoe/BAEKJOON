N = int(input())
num = list(map(int, input().split()))
operators = list(map(int, input().split()))
dtool = [0, 1, 2, 3] # +  -  *  /

def permutation(arr, r):
    result = []
    arr.sort()
    def gen_permutation(elements, r, path=[]):
        if r == 0:
            result.append(path)
            return

        for i in range(len(elements)):
            if i > 0 and elements[i] == elements[i-1]:
                continue
            gen_permutation(elements[:i]+elements[i+1:], r - 1, path + [elements[i]])

    gen_permutation(arr, r)
    return result

org = []
for i in range(4):
    org.extend([dtool[i]] * operators[i]) ####

Ori = list(permutation(org, N-1))

def Calculate(a,b,op):
    if op == 0:
        return a+b
    elif op == 1:
        return a-b
    elif op == 2:
        return a*b
    elif op == 3:
        if a < 0:
            return -(abs(a)//b)       #### 정수 나눗셈 ***
        else:
            return a//b

min_result = float('inf')
max_result = float('-inf') #### 최대최소 초기값 설정

for ops in Ori: #### 반복문 이렇게 써서 calculate 할때 ops 를 가져다 씀 !!! 왕 !!
    result = num[0]
    for i in range(N - 1):
        result = Calculate(result, num[i + 1], ops[i])

    min_result = min(min_result, result)
    max_result = max(max_result, result)

print(max_result)
print(min_result)
