selected_row = int(input())
operation = str(input()).upper()
length = 12

mat = [[float(input()) for column in range(length)] for row in range(length)]

soma = 0
for item in mat[selected_row]:
    soma += item

result = soma
if operation == 'M':
    result = soma / length

print(f"{result:.1f}")