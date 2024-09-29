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
        
        maior = 0
        lines = []
        for item in range(cases):
            word = input()
            maior = len(word) if maior < len(word) else maior
            lines.append(word)
        
        for word in lines:
            print(f"{(maior - len(word)) * ' '}{word}")
            
    except EOFError:
        break