totalCase = int(input())

for i in range(1, totalCase+1):
    """
    print(eval(input().replace("@", "* 3").replace("%", "+5").replace("#", "-7")))
    이렇게 했더니 소수점 대응이 안 됨...
    내가 문제를 너무 날먹하려고 했음 ㅠㅠㅠ
    """
    elements = input().split(" ")
    result = float(elements.pop(0))
    for element in elements:
        if element == "@":
            result *= 3
        if element == "%":
            result += 5
        if element == "#":
            result -= 7
    print(f"{result:.2f}")