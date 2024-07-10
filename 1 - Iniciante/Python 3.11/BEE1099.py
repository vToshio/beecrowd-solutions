n = int(input())

for i in range(n):
    stream = [int(num) for num in input().split()]

    x = min(stream)
    y = max(stream)

    soma = 0
    for i in range(x+1, y):
        if (i%2!=0):
            soma += i
    print(soma)