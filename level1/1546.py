#Average of manipulated score
def manipulate(ed,ing):
    return (ed/ing)*100

def average(scores):
    return sum(scores)/len(scores)

num = int(input())
score = []

score = input().split()
score = list(map(int,score))

max_score = max(score)

print(manipulate(average(score),max_score))