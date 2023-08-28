value = int(input())
print(value)
print(f"{int(value / 100)} nota(s) de R$ 100,00")
value = value % 100
print(f"{int(value / 50)} nota(s) de R$ 50,00")
value = value % 50
print(f"{int(value / 20)} nota(s) de R$ 20,00")
value = value % 20
print(f"{int(value / 10)} nota(s) de R$ 10,00")
value = value % 10
print(f"{int(value / 5)} nota(s) de R$ 5,00")
value = value % 5
print(f"{int(value / 2)} nota(s) de R$ 2,00")
value = value % 2
print(f"{value} nota(s) de R$ 1,00")
