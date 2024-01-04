n=int(input())

ll=[]
ll.append(0)
if n>1:
    ll.append(1)
for i in range(2,n):
    ll.append(ll[i-1]+ll[i-2])

print(*ll)