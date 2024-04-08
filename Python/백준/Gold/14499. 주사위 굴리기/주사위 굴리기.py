row,col,x,y,k = map(int, input().split())
board = []

dx = [0,0,-1,1]
dy = [1,-1,0,0]
rect = [0,0,0,0,0,0]

# 주사위 mapping

def turn(dir):
    a, b, c, d, e, f = rect[0], rect[1], rect[2], rect[3], rect[4], rect[5]
    if dir == 1:
        rect[0], rect[1], rect[2], rect[3], rect[4], rect[5] = d, b, a, f, e, c
    elif dir == 2:  # 서
        rect[0], rect[1], rect[2], rect[3], rect[4], rect[5] = c, b, f, a, e, d
    elif dir == 3:  # 북
        rect[0], rect[1], rect[2], rect[3], rect[4], rect[5] = e, a, c, d, f, b
    else:
        rect[0], rect[1], rect[2], rect[3], rect[4], rect[5] = b, f, c, d, a, e

# 지도 mapping
for i in range(row):
    board.append(list(map(int, input().split())))

# move
comm = list(map(int, input().split()))

nx,ny = x,y

for i in comm:
    nx += dx[i-1]
    ny += dy[i-1]

    if nx < 0 or nx >= row or ny < 0 or ny >= col:
        nx -= dx[i-1]
        ny -= dy[i-1]
        continue
    turn(i)
    if board[nx][ny] == 0:
        board[nx][ny] = rect[-1]
    else:
        rect[-1] = board[nx][ny]
        board[nx][ny] = 0

    print(rect[0])

