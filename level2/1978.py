#finding pramary number

def primary(nums_list):
    ret = 0
    for n in nums_list:
        p = True
        if n == 1:
            continue
        for d in range(2,n):
            if n % d == 0:
                p = False
                break
        if p:
            ret += 1
    return ret

n = input()
nums_list = map(int, input().split())

print(primary(nums_list))