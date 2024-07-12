num = int(input())

for i in range(1, num+1):
    print(i, int(i**2), int(i**3), sep=' ')
    print(i, int(i**2) + 1, int(i**3) + 1, sep=' ')