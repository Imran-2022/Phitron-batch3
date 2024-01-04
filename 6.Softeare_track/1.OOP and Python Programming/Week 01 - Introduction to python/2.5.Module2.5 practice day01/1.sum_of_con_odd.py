t = int(input())

while t:
    sm = 0
    a, b = map(int, input().split())
    for r in range(min(a,b)+1,max(a,b)):
        if r & 1:
            sm += r
    t -= 1
    print(sm)
