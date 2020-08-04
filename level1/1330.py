#comparsion of two numbers
def comparison(a,b):
    if a>b:
        return '>'
    elif a==b:
        return '=='
    else:
        return '<'

a,b = input().split()
print(comparison(int(a),int(b)))