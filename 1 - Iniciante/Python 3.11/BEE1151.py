qt = int(input())
fib = []

for i in range(qt):
    if (i==0):
        fib.append(0)
    elif (i==1):
        fib.append(1)
    else:
        fib.append(fib[-1] + fib[-2])

for i in range(len(fib)-1):
    print(fib[i], end=" ")
print(fib[-1])