num = float(input())
vet = []

for i in range(100):
    vet.append(num)
    num = num/2

for i in range(len(vet)):
    print(f"N[{i}] = {vet[i]:.4f}")