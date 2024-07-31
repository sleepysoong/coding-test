def is_true(value):
    return value

def solution(board):
    field = {}
    bomb = []
    for x in range(len(board)):
        for y in range(len(board[x])):
            field[(x, y)] = True
            if board[x][y] == 1:
                bomb.append((x, y))
    for bombX, bombY in bomb:
        for x in range(bombX - 1, bombX + 2):
            for y in range(bombY - 1, bombY + 2):
                if (x, y) in field:
                    field[(x, y)] = False
    return len(list(filter(is_true, field.values())))
                