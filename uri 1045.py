l = list(map(float, input().split(" ")))
l.sort(reverse=True)
A, B, C = l
if A >= B+C:
    print("NAO FORMA TRIANGULO")
else:
    if A**2 == (B**2 + C**2):
        print("TRIANGULO RETANGULO")
    if A**2 > (B**2 + C**2):
        print("TRIANGULO OBTUSANGULO")
    if A**2 < (B**2 + C**2):
        print("TRIANGULO ACUTANGULO")
    if A == B == C:
        print("TRIANGULO EQUILATERO")
    if A == B or B == C or C == A:
        if A != B or B != C or C != A:
            print("TRIANGULO ISOSCELES")
