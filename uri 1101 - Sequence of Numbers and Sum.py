while True:
    li = list(map(int, input().split(" ")))
    li.sort()
    a, b = li
    numlist = []
    if a <= 0 or b <= 0:
        break
    for i in range(a,b+1):
        numlist.append(i)
    numlist.append('Sum=%d'%sum(numlist))
    print(" ".join(map(str,numlist)))
