salary = float(input())
if 0 <= salary <= 2000:
    print("Isento")
elif 2000 < salary <= 3000:
    salary -= 2000
    print("R$ %.2f" %(salary * .08))
elif 3000 < salary <= 4500:
    salary -= 3000
    print("R$ %.2f" %((salary * .18) + 80))
else:
    salary -= 4500
    print("R$ %.2f" %((salary * .28) + (1500 * .18) + 80))
