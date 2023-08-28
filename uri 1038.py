value = input().split(" ")
X , Y = value
X , Y = int(X), int(Y)
price = [0, 4.00, 4.50, 5.00, 2.00, 1.50]
total = price[X] * Y
print("Total: R$ %.2f" %total)
