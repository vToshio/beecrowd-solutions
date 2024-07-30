lista = map(int, input().split(" "))
a = 0
n = 0
for item in lista:
    if (a == 0):
        a = item
    else:
        n = item if (item>0) else n

soma = 0
for i in range(n):
    soma += a + i
print(soma)