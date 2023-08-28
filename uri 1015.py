import math


p1 = input().split(" ")
p2 = input().split(" ")
x1, y1 = p1
x2, y2 = p2
x1, y1, x2, y2 = float(x1), float(y1), float(x2), float(y2)
dis = math.sqrt(((x2 -x1)**2) + ((y2 - y1) ** 2))
print("%0.4f" %dis)
