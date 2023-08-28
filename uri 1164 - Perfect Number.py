n = int(input())
for i in range(n):
    x = int(input())
    total = 0
    for j in range(1, x):
        if x % j == 0:
            total += j
    if total == x:
        print(f"{x} eh perfeito")
    else:
        print(f"{x} nao eh perfeito")
