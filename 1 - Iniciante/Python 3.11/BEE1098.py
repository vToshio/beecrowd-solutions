i = 0
aux = [1, 2, 3]
while (i<2.0): 
    if (i==0.0 or i==1.0 or i>1.8):
        for j in range(3):
            print(f'I={i:.0f} J={aux[j]:.0f}')
    else:
        for j in range(3):
            print(f'I={i:.1f} J={aux[j]:.1f}')

    aux = [item+0.2 for item in aux]
    i += 0.2