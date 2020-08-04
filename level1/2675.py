#repeat numbers
def repeat(R, S):
    for c in S:
        for _ in range(R):
            print(c,end='')
    print()

for _ in range(int(input())):
    variables = input().split()
    repeat(int(variables[0]),variables[1])