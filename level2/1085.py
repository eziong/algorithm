#escape from square
def escape(x,y,w,h):
    a = min(x,w-x)
    b = min(y,h-y)
    return a < b and a or b

x,y,w,h = map(int,input().split())
print(escape(x,y,w,h))