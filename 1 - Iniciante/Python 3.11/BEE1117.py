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