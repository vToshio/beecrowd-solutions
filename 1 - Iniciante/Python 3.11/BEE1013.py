stream = input().split(" ")
a, b, c = stream
a, b, c = int(a), int(b), int (c)

maiorAB = (a + b + abs(a-b)) / 2
maior = int((maiorAB + c + abs(maiorAB-c)) / 2)

print(f'{maior} eh o maior')
