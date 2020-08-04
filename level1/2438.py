#Drawing star
def star(num):
    for i in range(num):
        for j in range(i+1):
            print('*',end='')
        print()

star(int(input()))