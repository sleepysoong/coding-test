totalCase = int(input())

for i in range(1, totalCase+1):
    numbers = input().split(" ")
    print("Case #" + str(i) + ": " + numbers[0] + " + " + numbers[1] + " = " + str(sum(map(int, numbers))))