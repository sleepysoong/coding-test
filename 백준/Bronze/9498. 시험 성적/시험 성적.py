"""
시험 점수를 입력받아 90 ~ 100점은 A,
80 ~ 89점은 B,
70 ~ 79점은 C,
60 ~ 69점은 D,
나머지 점수는 F를 출력하는 프로그램을 작성하시오.
"""

def getGrade(score: int) -> str:
    CUT_LINE = {90: "A", 80: "B", 70: "C", 60: "D"}
    for criterion in CUT_LINE:
        if score >= criterion:
            return CUT_LINE[criterion]
    return "F"

try:
    score = input()
    if not score.isnumeric():
        raise Exception("점수는 숫자로 입력해주세요")
    print(getGrade(int(score)))
except Exception as e:
    print(e)