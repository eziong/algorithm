#finding the number
def BinarySearch(arr, val, start, end):
    if start > end:
        return False
    mid = (start + end) // 2
    if arr[mid] == val:
        return True
    elif arr[mid] > val:
        return BinarySearch(arr, val, start, mid-1)
    else:
        return BinarySearch(arr, val, mid+1, end)

def contain_num(A,nums):
    A = sorted(A)
    ret = []
    for n in nums:
        if BinarySearch(A, n, 0, len(A)-1):
            ret.append(1)
        else:
            ret.append(0)
    return ret

N = int(input())
A = list(map(int,input().split()))
M = int(input())
nums = list(map(int,input().split()))

find_table = contain_num(A,nums)

for t in find_table:
    print(t)