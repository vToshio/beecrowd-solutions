salary = float(input())

if (salary<=400):
    adjust = 0.15
elif (salary>400 and salary<=800):
    adjust = 0.12
elif (salary>800 and salary<=1200):
    adjust = 0.10
elif (salary>1200 and salary<=2000):
    adjust = 0.07
else:
    adjust = 0.04

new = salary + salary * adjust

print(f'Novo salario: {new:.2f}')
print(f'Reajuste ganho: {new - salary:.2f}')
print(f'Em percentual: {adjust * 100:.0f} %')