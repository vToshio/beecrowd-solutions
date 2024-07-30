num = int(input())
vet = []

j = 0
for i in range(1000):
    if (j>=num):
        j = 0
    vet.append(j)
    j += 1

for i in range(len(vet)):
    print(f"N[{i}] = {vet[i]}")