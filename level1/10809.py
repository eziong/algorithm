#finding the position of first each alphabet

def alphabet_position(s):
    ret = []
    for i in range(97,123):
        for j in range(len(s)):
            if s[j] == chr(i):
                ret.append(j)
                break;
            if j == len(s) - 1:
                ret.append(-1)
    return ret

word = alphabet_position(input())

for i in range(97,123):
    print(word[i-97],end=' ')