[a, b] = map(int, input().split(" "))
c = int(input())

b = b + c

while True:
    changed = False
    if b >= 60:
        b -= 60
        a += 1
        changed = True
    if a >= 24:
        a -= 24
        changed = True
    if changed == False:
        break

print(a, b)