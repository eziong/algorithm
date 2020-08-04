#alarm clock
def alarm(h, m):
    hhmm = [h,m]
    hhmm[1] -= 45
    if hhmm[1]<0:
        hhmm[1] += 60
        hhmm[0] -= 1
    if hhmm[0] < 0:
        hhmm[0] += 24
    print(hhmm[0],hhmm[1])

hhmm = input().split()
hhmm = list(map(int,hhmm))

alarm(hhmm[0],hhmm[1])