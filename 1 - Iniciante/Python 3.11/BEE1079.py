qt = int(input())

num = []
for i in range(qt):
    num = list(map(float, input().split()))
    media = (2*num[0] + 3*num[1] + 5*num[2]) / 10
    print(f'{media:.1f}')
