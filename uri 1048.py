salary = float(input())

if 0 <= salary <= 400:
    new = salary * 1.15
    earned = salary * .15
    per = 15
elif 400 < salary <= 800:
    new = salary * 1.12
    earned = salary * .12
    per = 12
elif 800 < salary <= 1200:
    new = salary * 1.10
    earned = salary * .10
    per = 10
elif 1200 < salary <= 2000:
    new = salary * 1.07
    earned = salary * .07
    per = 7
else:
    new = salary * 1.04
    earned = salary * .04
    per = 4
print("Novo salario: %.2f"%new)
print("Reajuste ganho: %.2f"%earned)
print(f"Em percentual: {per} %")
