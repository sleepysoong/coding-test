from collections import Counter

def solution(spell, dic):
    counter = Counter(spell)
    for word in dic:
        if Counter(word) == counter:
            return 1
    return 2