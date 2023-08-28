i = t = 0
while i < 2:
    a = float(input())
    if 0 <= a <= 10:
        t += a
        i += 1
    else:
        print("nota invalida")
print("media = %.2f"%(t/2))
