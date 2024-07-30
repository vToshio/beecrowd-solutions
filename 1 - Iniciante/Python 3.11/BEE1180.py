leng = int(input())
vet = list(map(int, input().split()))

print(f"Menor valor: {min(vet)}")
print(f"Posicao: {vet.index(min(vet))}")