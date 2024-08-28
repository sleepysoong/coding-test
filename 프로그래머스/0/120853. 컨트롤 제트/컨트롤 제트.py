def solution(s):
    _ = s.split(" ")
    rst = 0
    i = 0
    for element in _:
        if element == "Z":
            rst -= int(_[i - 1])
        else:
            rst += int(element)
        i += 1
    return rst