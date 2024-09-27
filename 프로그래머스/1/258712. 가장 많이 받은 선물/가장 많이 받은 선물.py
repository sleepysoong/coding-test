from itertools import combinations

def solution(friends, gifts):
    temp = {}
    point = {}
    result = {}
    for _ in gifts:
        [sender, receiver] = _.split(" ")
        if not sender in temp:
            temp[sender] = {}
        if not receiver in temp[sender]:
            temp[sender][receiver] = 0
        temp[sender][receiver] += 1
        if not sender in point:
            point[sender] = 0
        if not receiver in point:
            point[receiver] = 0
        point[sender] += 1
        point[receiver] -= 1
    def who(a, b):
        try:
            count_a = temp[a][b]
        except:
            count_a = 0
        try:
            count_b = temp[b][a]
        except:
            count_b = 0
        if count_a > count_b:
            return a
        if count_a < count_b:
            return b
        point_a = point[a] if a in point else 0
        point_b = point[b] if b in point else 0
        if point_a > point_b:
            return a
        if point_a < point_b:
            return b
        return None
    for (a, b) in combinations(friends, 2):
        _ = who(a, b)
        if not _ == None:
            if not _ in result:
                result[_] = 0
            result[_] += 1
    return 0 if len(result) < 1 else sorted(result.values())[-1]