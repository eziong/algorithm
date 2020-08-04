# arrange numbers
arr = []

n = int(input())
for _ in range(n):
    arr.append(int(input()))

arr.sort()

for e in arr:
    print(e)