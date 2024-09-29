while (True):
    try:
        string = str(input())
        new = ""
        flag = True

        for i in range(len(string)):
            if (string[i].isalpha()):
                if flag==True:
                    new += string[i].upper()
                    flag = False
                else:
                    new += string[i].lower()
                    flag = True
            else:
                new += " "
        
        print(new)
    except EOFError:
        break