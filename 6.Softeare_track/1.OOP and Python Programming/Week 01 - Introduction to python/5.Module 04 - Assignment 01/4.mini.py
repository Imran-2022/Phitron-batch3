skip = int(input())
elements = list(map(int, input().split()))
elements.sort()
cnt = 0
while True:
    if any(x % 2 != 0 for x in elements):
        break
    cnt += 1
    elements = [x // 2 for x in elements]
print(cnt)
