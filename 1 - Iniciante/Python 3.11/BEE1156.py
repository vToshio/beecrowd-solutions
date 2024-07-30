s, j, i = 0, 1, 1
while (j<=39):
    s += j / i
    i *= 2
    j += 2

print(f"{s:.2f}")