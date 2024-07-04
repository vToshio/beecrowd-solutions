vec = []
ctd = 0
for i in range(6):
    vec.append(float(input()))
    if (vec[i]>0):
        ctd += 1 

print(f"{ctd} valores positivos")