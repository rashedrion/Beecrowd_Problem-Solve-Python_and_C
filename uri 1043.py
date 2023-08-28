A, B, C = map(float,input().split(" "))
if A+B > C and B+C >A and C+A > B:
    print("Perimetro = %.1f"%(A+B+C))
else:
    print("Area = %.1f"%((C * (A+B)) / 2))
