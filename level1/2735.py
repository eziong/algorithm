#a leap year
def leap_year(y):
    if y % 4 == 0:
        if y % 100 != 0:
            return 1
        elif y % 400 == 0:
            return 1
        else:
            return 0
    else:
        return 0

print(leap_year(int(input())))