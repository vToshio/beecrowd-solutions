cases = int(input())

for i in range(cases):
    string = str(input())
    cript = []
    for i in reversed(range(len(string))):
        if (string[i].isalpha()):
            cript.append(chr(ord(string[i]) + 3))
        else:
            cript.append(string[i])
    
    for i in range(len(cript)//2, len(cript)):
        cript[i] = chr(ord(cript[i])-1)

    print("".join(cript))