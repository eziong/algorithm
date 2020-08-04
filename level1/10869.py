#the four arithmetical operations

def arithmatic(n_list):
    print(n_list[0]+n_list[1])
    print(n_list[0]-n_list[1])
    print(n_list[0]*n_list[1])
    print(n_list[0]//n_list[1])
    print(n_list[0]%n_list[1])

n_list = input().split()
n_list = list(map(int,n_list))

arithmatic(n_list)