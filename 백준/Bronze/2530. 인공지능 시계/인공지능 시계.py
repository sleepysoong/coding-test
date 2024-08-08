[a, b, c] = map(int, input().split(" "))
c += int(input())

while True:
    changed = False
    if c >= 60:
        c -= 60
        b += 1
        changed = True
    if b >= 60:
        b -= 60
        a += 1
        changed = True
    if a >= 24:
        a -= 24
        changed = True
    if changed == False:
        break

print(a, b, c)