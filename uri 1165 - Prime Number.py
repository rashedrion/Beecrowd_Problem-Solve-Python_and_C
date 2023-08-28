n = int(input())
for i in range(n):
    x = int(input())
    flag = 0
    for j in range(2, x):
        if x % j == 0:
            flag = 1
            break
    if flag == 0:
        print(f"{x} eh primo")
    else:
        print(f"{x} nao eh primo")
