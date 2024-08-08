totalCase = int(input())

for i in range(1, totalCase+1):
    [count, character] = input().split(" ")
    for _ in list(character):
        print(_*int(count), end="")
    print("\n", end="")