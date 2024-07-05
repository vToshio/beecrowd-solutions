numbers = []

largest = 0
posi = 0
for i in range(100):
    numbers.append(int(input()))
    if (numbers[i]>=largest):
        largest = numbers[i]
        posi = i + 1

print(largest)
print(posi)

