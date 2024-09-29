alphabet = "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
cases = int(input())

for i in range(cases):
    lines = int(input())
    hashCode = 0
    for j in range(lines):
        string = str(input()).upper()
        for c in range(len(string)):
            hashCode += alphabet.index(string[c]) + j + c

    print(hashCode)
