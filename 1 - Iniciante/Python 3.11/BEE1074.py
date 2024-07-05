def validation(num):
    if num == 0:
        return 'NULL'
    elif (num%2==0 and num>0):
        return 'EVEN POSITIVE'
    elif (num%2==0 and num<0):
        return 'EVEN NEGATIVE'
    elif (num%2!=0 and num>0):
        return 'ODD POSITIVE'
    else:
        return 'ODD NEGATIVE'

qt = int(input())
for i in range(qt):
    print(validation(int(input())))