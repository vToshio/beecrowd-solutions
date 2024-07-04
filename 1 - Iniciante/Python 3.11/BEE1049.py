caract = str(input())
especie = str(input())
habitos = str(input())

if (caract == "vertebrado"):
    if (especie == "ave"):
        if (habitos == "carnivoro"):
            print("aguia")
        elif (habitos == "onivoro"):
            print("pomba")
    elif (especie == "mamifero"):
        if (habitos == "onivoro"):
            print("homem")
        elif (habitos == "herbivoro"):
            print("vaca")
elif (caract == "invertebrado"):
    if (especie == "inseto"):
        if (habitos == "hematofago"):
            print("pulga")
        elif (habitos == "herbivoro"):
            print("lagarta")
    elif (especie == "anelideo"):
        if (habitos == "hematofago"):
            print("sanguessuga")
        elif (habitos == "onivoro"):
            print("minhoca")