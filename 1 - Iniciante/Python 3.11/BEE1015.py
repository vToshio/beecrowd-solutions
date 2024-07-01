from math import sqrt

stream1 = input().split(" ")
stream2 = input(). split()
x1, y1 = stream1
x2, y2 = stream2

distance = sqrt(pow(float(x2)-float(x1), 2) + pow(float(y2)-float(y1), 2))

print(f'{distance:.4f}')