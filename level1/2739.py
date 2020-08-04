#multiplication table
def multiplication_table(n):
    for i in range(1,10):
        print(n,'*',i,'=',n*i)

multiplication_table(int(input()))