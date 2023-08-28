while True:
    n = int(input())
    if n == 0:
        break
    sum = 0
    for j in range(10):
        if n % 2 == 0:
            sum += n
        n += 1
    print(sum)
