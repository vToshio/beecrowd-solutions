while True:
    try:
        string = input().lower().split()
        ctd = 0
        alit = False
        for i, j in enumerate(string):
            string[i] = j[0]
            if string[i] == string[i-1] and alit == False:
                alit = True
                ctd += 1
            elif string[i] != string[i-1]:
                alit = False
                
        print(ctd)
    except EOFError:
        break