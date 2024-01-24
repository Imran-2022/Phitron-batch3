string = input()

ans = 0
arrString = []
abc = ""

for i in string:
    abc += i
    if i == 'L':
        ans += 1
    if i == 'R':
        ans -= 1

    if ans == 0:
        arrString.append(abc)
        abc = ""

print(len(arrString))
for i in arrString:
    print(i)

