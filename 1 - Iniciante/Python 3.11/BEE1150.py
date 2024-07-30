x = int(input())
z = int(input())
while (z<=x):
    z = int(input())

soma = 0
qt = 0
for i in range(x, z):
    soma += i
    qt += 1
    if (soma>z):
        break

print(qt)