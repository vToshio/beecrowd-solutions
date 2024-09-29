cases = int(input())
for _ in range(cases):
    string = str(input()).lower()
    frequency = {}
    maior = 0

    for ch in string:
        if (ch in frequency.keys()):
            frequency[ch] += 1
        elif ch.isalpha():
            frequency.update({ch: 1})
        maior = frequency[ch] if (ch.isalpha() and maior<frequency[ch]) else maior

    chars = []
    for key, value in frequency.items():
        if value==maior:
            chars.append(key)
    chars.sort()
    
    print(''.join(chars))