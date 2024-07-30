vet = []
for i in range(10):
    aux = int(input())
    if (aux<=0):
        aux = 1
    vet.append(aux)
    print(f"X[{i}] = {vet[i]}")