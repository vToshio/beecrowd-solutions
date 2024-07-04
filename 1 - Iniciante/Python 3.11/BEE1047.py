h1, m1, h2, m2 = list(map(int, input().split(" ")))

total_minutes = (h2*60 + m2) - (h1*60 + m1)
if (total_minutes<=0):
    total_minutes += (24*60)
hours = total_minutes//60
total_minutes = total_minutes % 60

print(f"O JOGO DUROU {hours} HORA(S) E {total_minutes} MINUTO(S)")