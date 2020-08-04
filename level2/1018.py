#coloring chess board
def coloring(board): #2-dim board
    height = len(board)
    width = len(board[0])
    board_count = [[0 for _ in range(width-8)]for _ in range(height-8)]
    bw = ['B','W','B','W','B','W','B','W']
    wb = ['W','B','W','B','W','B','W','B']
    min_count = 64
    for h in range(height-8 + 1):
        for w in range(width-8 + 1):
            count = 0
            for i in range(8):
                for j in range(8):
                    if i % 2 == 0:
                        if bw[j] != board[h+i][w+j]:
                            count += 1
                    else:
                        if wb[j] != board[h+i][w+j]:
                            count += 1
            if min_count > min([count,64-count]):
                min_count = min([count,64-count])
    return min_count
    
n,m = input().split()
n = int(n)
board = []

for _ in range(n):
    str_board = input()
    board.append(list(str_board))

print(coloring(board))