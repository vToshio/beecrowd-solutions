stream = list(map(int, input().split()))
hr1, hr2 = stream

if (hr1 == hr2):
    time = 24
elif (hr1>hr2):
    time = abs(hr1-24) + hr2
else:
    time =  hr2 - hr1

print(f"O JOGO DUROU {time} HORA(S)")