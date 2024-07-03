stream = list(map(int, input().split()))
aux = stream.copy()
aux.sort()

for item in aux:
   print(item)
print()
for item in stream:
    print(item)