days = int(input())
y = int(days / 365)
days = days % 365
m = int(days / 30)
days = days % 30
print(f"{y} ano(s)")
print(f"{m} mes(es)")
print(f"{days} dia(s)")
