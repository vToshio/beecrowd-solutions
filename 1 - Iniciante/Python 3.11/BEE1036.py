from math import sqrt

stream = input().split(" ")
a, b, c = stream
a, b, c = float(a), float(b), float(c)

delta = pow(b, 2) - (4 * a * c)
if (delta<0) or (a==0):
    print('Impossivel calcular')
else:
    x1 = (-b+sqrt(delta)) / (2*a) 
    x2 = (-b-sqrt(delta)) / (2*a)

    print(f'R1 = {x1:.5f}')
    print(f'R2 = {x2:.5f}')