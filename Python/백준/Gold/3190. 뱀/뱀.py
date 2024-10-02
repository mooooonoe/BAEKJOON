n = int(input())
board = [([0]*n) for _ in range(n)]

k = int(input())
for _ in range(k):
    x,y = map(int, input().split())
    board[x-1][y-1] = 2

times = [0]*10000
L = int(input())
for _ in range(L):
    when, dirct = input().split()
    times[int(when)] = dirct

snake = []
snake.append([0,0]) # 시작 뱀 크기 1 초기화
board[0][0] = 1

# 위 오른쪽 아래 왼쪽
dx = [-1, 0, 1, 0]
dy = [0, 1, 0, -1]
dirct = 1

nx,ny = 0,0
time = 0

while(True):
    time += 1
    nx = nx + dx[dirct]
    ny = ny + dy[dirct]

    if(nx<0 or ny<0 or nx>=n or ny>=n or board[nx][ny]==1):
        break

    if(board[nx][ny]==2):   # 사과 먹었을때
        snake.append([nx,ny]) # 몸 길이 늘리기
        board[nx][ny] = 1

    elif(board[nx][ny]==0): # 빈칸일때 
        snake.append([nx, ny])
        board[nx][ny] = 1

        delX, delY = snake.pop(0)
        board[delX][delY] = 0

    if(times[time]=='D'):
        dirct = (dirct+1)%4
    elif(times[time]=='L'):
        dirct = (dirct+3)%4

print(time)


