"""
세 정수 A, B, C가 주어진다.
이때, 두 번째로 큰 정수를 출력하는 프로그램을 작성하시오.
"""

try:
    numbers = list(map(int, input().split(" ")))
    numbers.sort()
    print(numbers[1])
except:
    print("입력 오류")