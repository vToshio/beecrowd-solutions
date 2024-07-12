alcool, gasolina, diesel = 0, 0, 0
entrada = 0
while (entrada != 4):
    entrada = int(input())
    match (entrada):
        case 1:
            alcool += 1
        case 2:
            gasolina += 1
        case 3:
            diesel += 1
        case 4:
            break
        case _:
            continue

print("MUITO OBRIGADO")
print(f'Alcool: {alcool}')
print(f'Gasolina: {gasolina}')
print(f'Diesel: {diesel}')