while True:
    try:
        x, y = map(int, input().split())
        print(f'{x ^ y}')
    except EOFError:
        break
