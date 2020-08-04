#numbers less than X

def lessX(num_list, X):
    ret = []
    for num in num_list:
        if num < X:
            ret.append(num)
    return ret

n,X = input().split()
num_list = input().split()
num_list = list(map(int, num_list))

ret = lessX(num_list, int(X))

for c in ret:
    print(c,end=' ')