a, b = map(int, input().split(" "))
if a == b:
    time = 24
elif a > b:
    time = (24 - a) + b
else:
    time = b - a
print(f"O JOGO DUROU {time} HORA(S)")
