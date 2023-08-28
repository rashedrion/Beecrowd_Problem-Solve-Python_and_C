r = input().split(" ")
A, B, C = r
print("TRIANGULO: %0.3f" %(0.5 * float(A) * float(C)))
print("CIRCULO: %0.3f" %(3.14159 * float(C)**2))
print("TRAPEZIO: %0.3f" %(((float(A) + float(B)) / 2) * float(C)))
print("QUADRADO: %0.3f" %(float(B)**2))
print("RETANGULO: %0.3f" %(float(A) * float(B)))
