num = int(input())
a, b, c = 1, 1, 1

for i in range(num):
    print (a, b, c, sep=' ')
    a += 1
    b = a**2
    c = a**3