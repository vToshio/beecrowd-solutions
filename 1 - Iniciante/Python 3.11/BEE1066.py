vec = []
ctd_even, ctd_odd, ctd_pos, ctd_neg = 0, 0, 0, 0

for i in range(5):
    vec.append(float(input()))
   
    if (vec[i]%2==0):
        ctd_even += 1
    else:
        ctd_odd += 1
    
    if (vec[i]>0):
        ctd_pos += 1
    elif (vec[i]<0):
        ctd_neg += 1

print(f"{ctd_even} valor(es) par(es)")
print(f"{ctd_odd} valor(es) impar(es)")
print(f"{ctd_pos} valor(es) positivo(s)")
print(f"{ctd_neg} valor(es) negativo(s)")
