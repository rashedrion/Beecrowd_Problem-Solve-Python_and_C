n = int(input())
for i in range(n):
    pa, pb, g1, g2 = map(float, input().split(" "))
    pa, pb = int(pa), int(pb)
    y = 0
    while pa <= pb:
        pa += int((pa * g1) /100)
        pb += int((pb * g2) /100)
        y += 1
        if y > 100:
            print("Mais de 1 seculo.")
            break
    if y <= 100:
        print(f"{y} anos.")
