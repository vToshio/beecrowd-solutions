vet = []
for _ in range(20):
    vet.append(int(input()))

vet.reverse()
for i in range(len(vet)):
    print(f"N[{i}] = {vet[i]}")