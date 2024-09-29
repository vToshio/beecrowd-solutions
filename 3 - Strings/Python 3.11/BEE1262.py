while (True):
    try:
        trace = str(input()).upper()
        qt = int(input())

        cicles = 0
        flag = qt
        for ch in trace:
            if (ch == 'R'):
                if (flag == qt):
                    cicles += 1
                if (flag == 0):
                    cicles += 1
                    flag = qt
                flag -= 1
            else:
                cicles += 1
                flag = qt
            
        print(cicles)

    except EOFError:
        break