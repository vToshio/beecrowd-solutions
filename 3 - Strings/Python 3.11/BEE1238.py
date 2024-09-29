cases = int(input())

for i in range(cases):
    str1, str2 = map(str, input().split(" "))
    combination = ''

    if len(str2) > len(str1):
        bigger, smaller = str2, str1
    else:
        bigger, smaller = str1, str2

    for i in range(len(smaller)):
        combination += str1[i]
        combination += str2[i]
    
    for i in range(len(smaller), len(bigger)):
        combination += bigger[i]

    print(combination)