cases = int(input())

for _ in range(cases):
    string1, string2 = map(str, input().split(" "))

    if (len(string2)>len(string1)):
        print("nao encaixa")
    else:
        print("encaixa" if string1[len(string1)-len(string2)::]==string2 else "nao encaixa")        