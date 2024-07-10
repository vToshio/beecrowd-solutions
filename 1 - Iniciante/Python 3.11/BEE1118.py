novo_calculo = True

while (novo_calculo):
    notas = []
    validas = 0
    
    while (validas<2):
        nota = float(input())

        if (nota<0 or nota>10):
            print("nota invalida")
            continue
        
        notas.append(nota)
        validas += 1

    print(f'media = {(notas[0] + notas[1])/2:.2f}')
    
    while (True):
        print("novo calculo (1-sim 2-nao)")
        opcao = int(input())
        match (opcao):
            case 1:
                novo_calculo = True
                break
            case 2:
                novo_calculo = False
                break
            case _:
                continue