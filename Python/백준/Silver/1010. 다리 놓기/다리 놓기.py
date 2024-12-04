import math

testcase = int(input())  # Number of test cases

for tc in range(testcase):
    n, m = map(int, input().split())
    a, b = (n, m) if n >= m else (m, n)

    # Calculate combinations directly using math.comb
    result = math.comb(a, b)

    print(result)
