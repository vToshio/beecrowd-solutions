cases = int(input())

for i in range(cases):
    string = str(input())
    new_string = ""
    
    middle = len(string)//2
    for i in reversed(range(middle)):
        new_string += string[i]
    for i in range(len(string)-1, middle-1, -1):
        new_string += string[i]

    print(new_string)