"""
수업 시간에 떠드는 두 학생이 있다. 두 학생은 수업에 집중하는 대신에 글로벌 경제 위기에 대해서 토론하고 있었다. 토론이 점점 과열되면서 두 학생은 목소리를 높였고, 결국 선생님은 크게 분노하였다.

이렇게 학생들이 수업 시간에 떠드는 문제는 어떻게 해결해야 할까?

얼마전에 초등학교 선생님으로 취직한 상근이는 이 문제를 수학 문제로 해결한다. 학생들을 진정시키기 위해 칠판에 수학 문제를 써주고, 아이들에게 조용히 이 문제를 풀게 한다. 학생들이 문제를 금방 풀고 다시 떠드는 것을 방지하기 위해서, 숫자를 매우 크게 한다.

아직 초등학교이기 때문에, 학생들은 덧셈과 곱셈만 배웠다. 또, 아직 10의 제곱꼴을 제외한 다른 수는 학교에서 배우지 않았기 때문에, 선생님이 써주는 수는 모두 10의 제곱 형태이다.

쉬는 시간까지 문제를 푸는 것을 막기 위해서, 선생님이 써주는 숫자는 최대 100자리이다.

칠판에 쓰여 있는 문제가 주어졌을 때, 결과를 구하는 프로그램을 작성하시오.
"""

AVAILABLE_OPERATORS = ["*", "+"]

try:
    A = input()
    if not A.isnumeric():
        raise Exception("숫자를 입력 받아야 합니다")
    operator = input()
    if not operator in AVAILABLE_OPERATORS:
        raise Exception("사용 불가능한 연산자 입니다 | 사용 가능한 연산자: " + ', '.join(AVAILABLE_OPERATORS))
    B = input()
    if not B.isnumeric():
        raise Exception("숫자를 입력 받아야 합니다")
    print(eval(A+operator+B))
except Exception as e:
    print(e)
