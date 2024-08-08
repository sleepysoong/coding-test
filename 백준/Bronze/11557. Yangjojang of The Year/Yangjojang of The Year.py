for i in range(int(input())):
    count = int(input())
    data = {}
    for j in range(count):
        [school, bottle] = input().split(" ")
        data[school] = int(bottle)
    print(sorted(data, key=lambda x:data[x], reverse=True)[0])