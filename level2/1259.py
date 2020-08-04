#palindrome

def palindrome(words_list):
    yn_table = ['yes' for _ in range(len(words_list))]
    for i in range(len(words_list)):
        for j in range(len(words_list[i])//2):
            if words_list[i][j] != words_list[i][-j-1]:
                yn_table[i] = 'no'
                break
    return yn_table

words_list = []

while True:
    s = input()
    if s == '0':
        break
    words_list.append(s)

yes_or_no = palindrome(words_list)

for yn in yes_or_no:
    print(yn)

