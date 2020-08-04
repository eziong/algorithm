#sum

n = int(input())
n_list = []
for i in range(n):
    a,b = input().split()
    n_list.append([int(a),int(b)])

for i in n_list:
    print(sum(i))