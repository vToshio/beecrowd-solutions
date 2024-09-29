first = True
while True:
    try:
        cases = int(input())

        if(cases == 0):
            break

        if(first):
            first = False
        else:
            print('')
        
        lines = []
        maior = 0
        for i in range(cases):
            lines.append(" ".join(input().split()))
            maior = len(lines[i]) if maior<len(lines[i]) else maior
            lines[i] = lines[i].upper()

        for word in lines:
            print(f"{(maior - len(word)) * ' '}{word}")
            
    except EOFError:
        break