column, num = map(int, input().split(" "))

i = 1
while (i<=num):
    for j in range(column-1):
        print(i, end=" ")
        i += 1
    print(i)
    i += 1