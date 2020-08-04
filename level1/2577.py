#the number of number
def count(num):
    count_list = [0 for _ in range(10)]
    while num > 0:
        count_list[num % 10] += 1
        num //= 10
    for i in range(10):
        print(count_list[i])

num = 1

for i in range(3):
    num *= int(input())

count(num)