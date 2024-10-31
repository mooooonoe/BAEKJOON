n = int(input())
arr = [list(input()) for _ in range(n)]  # arr을 2차원 리스트로 초기화
arr2 = [[None for _ in range(n)] for _ in range(n)]  # arr2를 2차원 리스트로 초기화

checklist = [[False for _ in range(n)] for _ in range(n)]

# 적록색약용 배열 생성
for i in range(n):
    for j in range(n):
        if arr[i][j] == 'G':
            arr2[i][j] = 'R'  # arr2[i][j] 값을 수정 가능
        else:
            arr2[i][j] = arr[i][j]

# 반복을 사용한 DFS
def check(grid, checklist, start_x, start_y, color):
    stack = [(start_x, start_y)]
    checklist[start_x][start_y] = True

    dx = [1, 0, -1, 0]
    dy = [0, 1, 0, -1]

    while stack:
        x, y = stack.pop()
        for direction in range(4):
            nx, ny = x + dx[direction], y + dy[direction]
            if 0 <= nx < n and 0 <= ny < n:
                if grid[nx][ny] == color and not checklist[nx][ny]:
                    checklist[nx][ny] = True
                    stack.append((nx, ny))

ret1 = 0
ret2 = 0

# 일반 시야 검사
for i in range(n):
    for j in range(n):
        if not checklist[i][j]:
            color = arr[i][j]
            check(arr, checklist, i, j, color)
            ret1 += 1

# 적록색약을 위한 초기화
checklist = [[False for _ in range(n)] for _ in range(n)]

# 적록색약 시야 검사
for i in range(n):
    for j in range(n):
        if not checklist[i][j]:
            color = arr2[i][j]
            check(arr2, checklist, i, j, color)
            ret2 += 1

print(ret1, ret2)
