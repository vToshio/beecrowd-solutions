num = int(input())
vet = [num]
print(f"N[0] = {vet[0]}")
for i in range(1, 10):
    vet.append(vet[i-1]*2)
    print(f"N[{i}] = {vet[i]}")