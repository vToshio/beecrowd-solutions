# Input
string, day1 = input().split(" ")
day1 = int(day1)
h1, string1, m1, string2, s1 = input().split(" ")

string, day2 = list(input().split(" "))
day2 = int(day2)
h2, string1, m2, string2, s2 = input().split(" ")

#Logic

time = (
    ((day2*24*3600) + (int(h2)*3600) + (int(m2)*60) + int(s2)) 
    - ((day1*24*3600) + (int(h1)*3600) + (int(m1)*60) + int(s1))
    )

days = time // (24 * 3600)
hours = (time % (24 * 3600)) // 3600
minutes = ((time % (24 * 3600)) % 3600) // 60
seconds = (((time % (24 * 3600)) % 3600) % 60)

#Output
print(f'{days} dia(s)')
print(f'{hours} hora(s)')
print(f'{minutes} minuto(s)')
print(f'{seconds} segundo(s)')