def media():
    i = t = 0
    while i < 2:
        a = float(input())
        if 0 <= a <= 10:
            t += a
            i += 1
        else:
            print("nota invalida")
    print("media = %.2f"%(t/2))
    return

media()
while True:
    print("novo calculo (1-sim 2-nao)")
    n = int(input())
    if n == 2:
        break
    elif n == 1:
        media()
