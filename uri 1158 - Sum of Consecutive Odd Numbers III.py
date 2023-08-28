n = int(input())
for i in range(n):
    x, y = map(int,input().split(" "))
    sum = 0
    for j in range(y*2):
        if x % 2 != 0:
            sum += x
        x += 1
    print(sum)
