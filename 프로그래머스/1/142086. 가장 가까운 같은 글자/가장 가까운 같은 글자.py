def solution(s):
    temp = {}
    
    for i in range(len(s)):
        if s[i] in temp:
            temp[s[i]][i] = 1
        else:
            temp[s[i]] = [0] * len(s)
            temp[s[i]][i] = 1

    result = [-1] # 처음 숫자는 무조건 -1일 수 밖에 없음
    
    for i in range(1, len(s)):
        _ = -1
        for j in range(i-1, -1, -1):
            if temp[s[i]][j] == 1:
                _ = i - j
                break
        result += [_]
        
    return result