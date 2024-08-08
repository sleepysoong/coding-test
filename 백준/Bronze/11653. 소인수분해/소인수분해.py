"""
정수 N이 주어졌을 때, 소인수분해하는 프로그램을 작성하시오.
"""

try:
    N = int(input())
    i = 2
    while i <= N and N > 1:
        if N % i == 0:
            N /= i
            print(i)
        else:
            i += 1 # 같은 수로 여러 번 나누어질 수도 있으니까...
except:
    print("입력 오류")