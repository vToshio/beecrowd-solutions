vec = []
ctd = 0
for i in range(5):
    vec.append(float(input()))
    if (vec[i]%2==0):
        ctd += 1

print(f"{ctd} valores pares")