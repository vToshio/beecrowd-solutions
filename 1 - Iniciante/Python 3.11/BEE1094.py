cases = int(input())

total = 0
sapos, ratos, coelhos = 0, 0, 0
for i in range(cases):
    qt, tp = input().split(' ')
    qt = int(qt)

    match (tp):
        case 'S':
            sapos += qt
        case 'R':
            ratos += qt
        case 'C':
            coelhos += qt
    
    total += qt

print(f'Total: {total} cobaias')
print(f'Total de coelhos: {coelhos}')
print(f'Total de ratos: {ratos}')
print(f'Total de sapos: {sapos}')
print(f'Percentual de coelhos: {float((coelhos * 100)/total):.2f} %')
print(f'Percentual de ratos: {float((ratos * 100)/total):.2f} %')
print(f'Percentual de sapos: {float((sapos * 100)/total):.2f} %')