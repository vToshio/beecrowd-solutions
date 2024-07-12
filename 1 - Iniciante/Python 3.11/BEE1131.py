inter = 0
gremio = 0
qtd_grenais = 0
empates = 0
novo_grenal = True
while (novo_grenal):
    x, y = map(int, input().split(" "))
    
    if (x>y):
        inter += 1
    elif (y>x):
        gremio += 1
    else:
        empates += 1

    while (True):
        print("Novo grenal (1-sim 2-nao)")
        opcao = int(input())
        match (opcao):
            case 1:
                novo_grenal = True
                break
            case 2:
                novo_grenal = False
                break
            case _:
                continue

    qtd_grenais += 1

print(f'{qtd_grenais} grenais')
print(f'Inter:{inter}')
print(f'Gremio:{gremio}')
print(f'Empates:{empates}')
if (inter>gremio):
    print("Inter venceu mais")
elif (gremio>inter):
    print("Gremio venceu mais")
else:
    print("Nao houve vencedor")