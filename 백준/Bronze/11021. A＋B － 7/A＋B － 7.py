totalCase = int(input())

for i in range(1, totalCase+1):
    numbers = input().split(" ")
    print("Case #" + str(i) + ": " + str(sum(map(int, numbers))))