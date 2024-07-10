num = 7
for i in range(1, 10, 2):
    for j in reversed(range(num-2, num+1, 1)):
        print(f'I={i} J={j}')
    num += 2