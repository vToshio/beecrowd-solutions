cases = int(input())

for _ in range(cases):
    num = int(input())
    div = [i for i in range(1, num+1) if (num%i)==0]
    print(f"{num} nao eh primo") if (len(div)>2) else print(f"{num} eh primo")