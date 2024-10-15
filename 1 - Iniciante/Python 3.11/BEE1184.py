ordem = 12
op = str(input())
matriz = [[float(input()) for i in range(ordem)] for j in range(ordem)]

soma = 0
qtd_elem = 0
for i in range(ordem):
    for j in range(ordem):
        if (j<i):
            soma += matriz[i][j]
            qtd_elem += 1

if (op != 'S'):
    soma = soma / qtd_elem

print(f'{soma:.1f}')
