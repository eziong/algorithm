#the most used number of character
s = str(input())
s = s.upper()
alphabet = dict()

for i in range(len(s)):
    if alphabet.get(s[i]) is None:
        alphabet[s[i]] = 0
    else:
        alphabet[s[i]] += 1

max_val = max(alphabet.values())
max_key = ''
tf = True

for i in alphabet.keys():
    if alphabet.get(i) == max_val:
        if tf:
            max_key = i
            tf = False
        else:
            max_key = '?'

print(max_key)

    
