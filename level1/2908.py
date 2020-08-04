#fool sangsoo
def sangsoo(A,B):
    A = int(A[::-1])
    B = int(B[::-1])
    return A > B and A or B

A,B = input().split()
print(sangsoo(A,B))
