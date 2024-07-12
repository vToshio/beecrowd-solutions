num = int(input())
ctd = 1
for i in range(num):
    for j in range(3):
        print(f'{ctd}', end=' ')
        ctd += 1
    ctd += 1
    print('PUM')