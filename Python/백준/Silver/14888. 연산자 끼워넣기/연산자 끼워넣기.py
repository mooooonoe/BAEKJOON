N = int(input())
num = list(map(int, input().split()))
operators = list(map(int, input().split()))  # 각 연산자 개수
dtool = [0, 1, 2, 3]  # +, -, *, /

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

# 모든 연산자 순열 구하기
org = []
for i in range(4):
    org.extend([dtool[i]] * operators[i])

Ori = list(permutation(org, N-1))

def calculate_expression(a, b, op):
    if op == 0:
        return a + b
    elif op == 1:
        return a - b
    elif op == 2:
        return a * b
    elif op == 3:
        # 음수를 양수로 나눌 때는 C++14의 기준을 따름
        if a < 0:
            return -((-a) // b)
        else:
            return a // b

# 초기값 설정
min_result = float('inf')
max_result = float('-inf')

# 모든 연산자 순열에 대해 계산
for ops in Ori:
    result = num[0]
    for i in range(N-1):
        result = calculate_expression(result, num[i+1], ops[i])
    
    min_result = min(min_result, result)
    max_result = max(max_result, result)

print(max_result)
print(min_result)
