from math import floor

cedules = [100, 50, 20, 10, 5, 2, 1]
qt = []

value = int(input())
print(value)
for i in range(7):
    qt.append(floor(value / cedules[i]))
    value %= cedules[i]
    
for i in range(7):
    print(f'{qt[i]} nota(s) de R$ {cedules[i]},00')
