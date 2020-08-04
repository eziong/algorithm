#GCD and LCM

def GCD(a,b):
    if b == 0:
        return a
    return GCD(max(a-b,b),min(a-b,b))

def LCM(a,b):
    return (a//GCD(a,b))*(b//GCD(a,b))*GCD(a,b)

x, y = map(int, input().split())

print(GCD(max(x,y),min(x,y)))
print(LCM(max(x,y),min(x,y)))