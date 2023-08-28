value = input().split(" ")
n1, n2, n3, n4 = value
n1, n2, n3, n4 = float(n1), float(n2), float(n3), float(n4)
media = ((n1*2) + (n2*3) + (n3*4) + (n4*1)) / (2+3+4+1)
print("Media: %0.1f"%media)

if media >= 7.0:
    print("Aluno aprovado.")
elif media < 5.0:
    print("Aluno reprovado.")
else:
    print( "Aluno em exame.")
    n5 = float(input())
    print("Nota do exame: %.1f"%n5)
    media2 = (media + n5) / 2
    if media2 >= 5.0:
        print("Aluno aprovado.")
    else:
        print("Aluno reprovado.")
    print("Media final: %0.1f"%media2)
