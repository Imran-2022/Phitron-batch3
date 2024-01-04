t=int(input())
while t:
    abc=[]
    s=input()
    sr=s[::-1]
    for i in sr:
        abc.append(i)
    t-=1
    print(*abc)
