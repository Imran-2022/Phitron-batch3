from collections import Counter

N = int(input())
a = list(map(int, input().split()))

# Use Counter to count occurrences of each element
obj = Counter(a)

cnt = 0

# Calculate the difference between the count and the value for each element
for x in obj:
    if obj[x] > x:
        cnt += obj[x] - x
    elif obj[x] < x:
        cnt += obj[x]

print(cnt)
# print(obj)