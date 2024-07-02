sec = int(input())

hours = sec//3600
sec %= 3600
minutes = sec//60
sec %= 60

print(f'{hours}:{minutes}:{sec}')