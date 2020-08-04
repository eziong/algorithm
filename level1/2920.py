#musical scale
def scaling(scale):
    ret = 0
    for i in range(len(scale)-1):
        if ret == 0:
            if scale[i+1] > scale[i]:
                ret = 1
            elif scale[i+1] == scale[i]:
                ret = 0
            else:
                ret = -1
        if ret == 1:
            if scale[i+1] >= scale[i]:
                ret = 1
            else:
                ret = -2
        if ret == -1:
            if scale[i+1] > scale[i]:
                ret = 2
            else:
                ret = -1
    return ret

scale = input().split()
scale = list(map(int,scale))

print(scaling(scale) == 1 and "ascending" or (scaling(scale) == -1 and "descending" or "mixed"))