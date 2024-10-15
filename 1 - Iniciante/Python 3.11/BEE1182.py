ordem = 12

col = int(input())
op = str(input())
matriz = [[float(input()) for i in range(ordem)] for j in range(ordem)]

soma = 0
for i in range(ordem):
    soma += matriz[i][col]

if (op != 'S'):
    soma = soma / ordem
print(f'{soma:.1f}')