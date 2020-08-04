#Verification
def verification(nums):
    sum = 0
    for i in nums:
        sum += i*i
        sum %= 10
    return sum

num = input().split()
num = list(map(int,num))

print(verification(num))