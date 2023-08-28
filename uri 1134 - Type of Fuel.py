a = g = d = 0
while True:
    num = int(input())
    if num == 1: a += 1
    elif num == 2: g += 1
    elif num == 3: d += 1
    elif num == 4:
        print("MUITO OBRIGADO")
        print(f"Alcool: {a}")
        print(f"Gasolina: {g}")
        print(f"Diesel: {d}")
        break
