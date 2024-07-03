stream = input().split()
cod, qt = stream
cod, qt = int(cod), int(qt)

match cod:
    case 1:
        total = 4.00 * qt
    case 2:
        total = 4.50 * qt
    case 3:
        total = 5.00 * qt
    case 4:
        total = 2.00 * qt
    case 5:
        total = 1.50 * qt
    case _:
        exit()

print(f"Total: R$ {total:.2f}")