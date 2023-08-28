while True:
    a, b =map(int, input().split(" "))
    if a == 0 or b == 0:
        break
    elif a > 0 < b:
        print("primeiro")
    elif a > 0 > b:
        print("quarto")
    elif a < 0 > b:
        print("terceiro")
    else:
        print("segundo")
