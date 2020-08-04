#Finding Max_num and the Max_num position

def finding(nums):
    pos = 0
    max_num = 0
    for i in range(len(nums)):
        if nums[i] > max_num:
            pos = i+1
            max_num = nums[i]
    print(max_num)
    print(pos)

nums = []

for _ in range(9):
    nums.append(int(input()))

finding(nums)