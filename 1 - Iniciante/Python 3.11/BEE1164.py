cases = int(input())

for _ in range(cases):
    num = int(input())
    div = [i for i in range(1, num) if num%i==0]
    print(f"{num} eh perfeito") if sum(div)==num else print(f"{num} nao eh perfeito")