ages = []
while (True):
    age = int(input())
    if (age<0):
        break
    ages.append(age)

print(f"{sum(ages)/len(ages):.2f}")