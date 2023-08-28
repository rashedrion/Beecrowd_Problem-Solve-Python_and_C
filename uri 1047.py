a, b, c, d = map(int, input().split(" "))
h = c-a
m = d-b
if h == 0 >= m:
    h = 24
if h < 0:
    h += 24
if m < 0:
    m += 60
    h -= 1
print(f"O JOGO DUROU {h} HORA(S) E {m} MINUTO(S)")
