#find min and max
def find_min_max(num_list):
    return [min(num_list),max(num_list)]

n = input()

num_list = input().split()
num_list = list(map(int,num_list))

print(find_min_max(num_list)[0],find_min_max(num_list)[1])