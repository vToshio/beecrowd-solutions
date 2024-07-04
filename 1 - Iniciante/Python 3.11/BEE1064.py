vec = []
ctd = 0
soma = 0
for i in range(6):
    vec.append(float(input()))
    if (vec[i]>0):
        soma += vec[i]
        ctd += 1 

print(f"{ctd} valores positivos")
print(f"{soma/ctd:.1f}")