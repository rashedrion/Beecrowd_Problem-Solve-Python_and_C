for i in range(int(input())):
    li = list(map(int, input().split(" ")))
    li.sort()
    a, b = li
    sum = 0
    for j in range(a+1,b):
        if j % 2 != 0:
            sum += j
    print(sum)
