cases = int(input())

for _ in range(cases):
    popA, popB, g1, g2 = map(float, input().split(" "))
    years = 0

    while (popA<=popB):
        popA += (popA * g1)//100
        popB += (popB * g2)//100
        years += 1

    print("Mais de 1 seculo.") if (years>100) else print(f"{years} anos.")