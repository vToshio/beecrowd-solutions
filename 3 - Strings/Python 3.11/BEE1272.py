cases = int(input())

for i in range(cases):
    string = str(input()).lower()
    word_found = False
    msg = ''

    for ch in string:
        if (ch.isalpha()):
            if word_found == False:
                msg += ch
                word_found = True
            continue
        word_found = False
    
    print(msg)