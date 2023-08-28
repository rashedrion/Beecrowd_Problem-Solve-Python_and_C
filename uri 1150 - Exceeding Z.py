x = int(input())
while True:
    z = int(input())
    if z > x:
        break
count = 0
sum = 0
while sum < z:
    sum += x
    count += 1
    x += 1
print(count)
