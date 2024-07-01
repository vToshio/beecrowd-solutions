stream = input().split(" ")
a, b, c = stream
a, b, c = float(a), float(b), float(c)

tri = (a * c) / 2
cir = 3.14159 * pow(c, 2)
tra = (a + b) * c / 2
sqr = pow(b, 2)
rec = a * b

print(f'TRIANGULO: {tri:.3f}')
print(f'CIRCULO: {cir:.3f}')
print(f'TRAPEZIO: {tra:.3f}')
print(f'QUADRADO: {sqr:.3f}')
print(f'RETANGULO: {rec:.3f}')