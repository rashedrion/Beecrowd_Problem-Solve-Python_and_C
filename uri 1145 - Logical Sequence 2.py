x, y = map(int, input().split(" "))
count = 0
for i in range(1, y+1):
    count += 1
    if count != x:
        print(i, end=" ")
    elif count == x:
        print(i)
        count = 0
