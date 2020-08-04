#OX problem
def OX_score(s):
    score = 0
    point = 0
    for p in s:
        if p == 'X':
            point = 0
        else:
            point += 1
            score += point
    return score

OX_list = []
n = int(input())

for _ in range(n):
    OX_list.append(input())

for i in range(n):
    print(OX_score(OX_list[i]))