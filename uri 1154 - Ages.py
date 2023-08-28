total = count = 0
while True:
    age = int(input())
    if age < 0:
        print("%.2f"%(total / count))
        break
    total += age
    count += 1
