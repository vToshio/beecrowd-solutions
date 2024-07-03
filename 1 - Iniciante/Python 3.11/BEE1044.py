stream = list(map(int, input().split()))
a, b = stream

if (b%a==0) or (a%b==0):
    print('Sao Multiplos')
else:
    print('Nao sao Multiplos')