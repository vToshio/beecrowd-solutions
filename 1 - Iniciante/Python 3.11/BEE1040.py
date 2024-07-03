n1, n2, n3, n4 = input().split()
n1, n2, n3, n4 = float(n1), float(n2), float(n3), float(n4)

media = (n1*2 + n2*3 + n3*4 + n4*1) / 10

print(f'Media: {media:.1f}')

if (media<5.0):
    print("Aluno reprovado.")
elif (media>=7):
    print("Aluno aprovado.")
else:
    print("Aluno em exame.")

    nExame = float(input())
    media = (media + nExame) / 2 
    
    print(f'Nota do exame: {nExame:.1f}')
    if (media>=5.0):
        print("Aluno aprovado.")
    else:
        print("Aluno")
    print(f'Media final: {media:.1f}')