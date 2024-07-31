def solution(numbers, k):
    players = numbers * 2
    next = 1
    while k > 1:
        next = players[next + 1]
        k -= 1
    return next