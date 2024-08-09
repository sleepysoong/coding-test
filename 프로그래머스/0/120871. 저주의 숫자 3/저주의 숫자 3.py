def solution(n):
    converted = 0
    for i in range(n):
        converted += 1
        while converted % 3 == 0 or "3" in str(converted):
            converted += 1
    return converted