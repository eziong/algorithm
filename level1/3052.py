#remainder
def count_remainders(n_list, Q):
    ret = dict()
    for n in n_list:
        if ret.get(n%Q) is None:
            ret[n%Q] = 0
        else:
            ret[n%Q] += 1
    return len(ret.keys())

nums = []

for _ in range(10):
    nums.append(int(input()))

print(count_remainders(nums,42))