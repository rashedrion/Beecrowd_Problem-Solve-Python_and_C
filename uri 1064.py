i = 0
j = 0
total = 0
while i < 6:
    num = float(input())
    if num >= 0:
        total += num
        j += 1
    i += 1
print(f"{j} valores positivos")
print("%.1f"%(total/j))
