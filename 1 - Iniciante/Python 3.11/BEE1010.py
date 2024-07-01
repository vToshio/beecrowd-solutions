x = input().split(" ")
y = input().split(" ")

num1, qtd1, value1 = x
num2, qtd2, value2 = y

print(f"VALOR A PAGAR: R$ {(int(qtd1)*float(value1)) + (int(qtd2)*float(value2)):.2f}")