import math
values = input().split(" ")
A, B, C = values
A, B, C = float(A), float(B), float(C)
cons = B**2 - 4 * A * C
if A != 0 and cons >= 0 :
    root1 = (-B + math.sqrt(cons)) / (2 * A)
    root2 = (-B - math.sqrt(cons))/ (2 * A)
    print("R1 = %.5f" % root1)
    print("R2 = %.5f" % root2)
else:
    print('Impossivel calcular')
