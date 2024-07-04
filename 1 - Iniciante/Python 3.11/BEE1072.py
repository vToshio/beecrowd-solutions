qt = int(input())

inside = 0
out = 0
for i in range(qt):
    num = int(input())
    if (num>=10 and num<=20):
        inside += 1
    else:
        out += 1

print(f'{inside} in')
print(f'{out} out')