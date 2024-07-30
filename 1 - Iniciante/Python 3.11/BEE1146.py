while (True):
    num = int(input())
    if (num == 0):
        break

    string = ''
    aux = 1
    while (aux<num):
        string += str(aux) + ' '
        aux += 1
    string += str(aux)
    print(string)