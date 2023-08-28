value = input().split(" ")
x, y = value
x, y = float(x), float(y)

if x == y == 0:
    print("Origem")
elif x == 0:
    print("Eixo Y")
elif y == 0:
    print("Eixo X")
elif x > 0 < y:
    print("Q1")
elif x < 0 < y:
    print("Q2")
elif x < 0 > y:
    print("Q3")
elif x > 0 > y:
    print("Q4")
