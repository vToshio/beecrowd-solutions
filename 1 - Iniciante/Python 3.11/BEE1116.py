num = int(input())

for i in range(num):
    x, y = map(int, input().split(" "))

    if (y == 0):
        print("divisao impossivel")
        continue

    print(f'{float(x/y):.1f}')