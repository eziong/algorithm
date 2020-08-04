#card2

def card(n):
    arr = [i+1 for i in range(n)]
    # if m ==1, discard and shuffle, if m == -1, shuffle and discard
    m = 1
    while len(arr) > 1:
        #print(arr)
        len_arr = len(arr)
        if m > 0: #discard and shuffle
            arr = make_arr_half(arr,m)
            m *= ((len_arr % 2 == 0) and 1 or -1)
        else: # shuffle and discard
            arr = make_arr_half(arr,m)
            m *= ((len_arr % 2 == 0) and 1 or -1)
    return arr[0]

def make_arr_half(arr,m):
    new_arr = []
    if m > 0:
        for i in range(len(arr)):
            if i % 2 == 1:
                new_arr.append(arr[i])
    else:
        for i in range(len(arr)):
            if i % 2 == 0:
                new_arr.append(arr[i])
    return new_arr

#n = int(input())
#print(card(n))

for i in range(100):
    print(i+1,card(i+1))