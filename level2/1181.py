#sorting words

def sort_words(word_list):
    sorted_list = sorted(sorted(word_list, key = lambda x : x),key = lambda x: len(x))
    return sorted_list

n = int(input())
s = []
for _ in range(n):
    s.append(input())
s = list(set(s))

s = sort_words(s)

for i in range(len(s)):
    print(s[i])