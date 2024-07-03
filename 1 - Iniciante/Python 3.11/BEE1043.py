stream = list(map(float, input().split()))
a, b, c = stream

if (((c>abs(b-a)) and c<b+a) or
    ((a>abs(b-c) and a<b+c)) or
    ((b>abs(a-c) and b<a+c))): 
    print(f'Perimetro = {a+b+c:.1f}')
else:
    print(f'Area = {((a+b)*c)/2:.1f}')