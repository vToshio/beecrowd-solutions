while (True):
    stream = list(map(int, input().split(" ")))
    m = min(stream)
    n = max(stream)

    if (m<=0 or n<=0):
        break
    else:
        soma = 0
        for i in range(m, n+1):
            print(i, end=' ')
            soma += i
        print(f'Sum={soma}')