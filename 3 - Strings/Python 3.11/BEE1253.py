cases = int(input())

for i in range(cases):
    string = str(input())
    num = int(input())

    cypher = ""
    for char in string:
        position = ord(char) - num
        if position<65:
            cypher +=  chr(91 - (65-position))
        else:
            cypher += chr(ord(char)-num)
    
    print(cypher)