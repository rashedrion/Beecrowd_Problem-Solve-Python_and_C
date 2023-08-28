line1 = input().split(" ")
line2 = input().split(" ")
product1, unit1, price1 = line1
product2, unit2, price2 = line2
pay = (int(unit1) * float(price1)) + (int(unit2) * float(price2))

print('VALOR A PAGAR: R$ %0.2f'%pay)
