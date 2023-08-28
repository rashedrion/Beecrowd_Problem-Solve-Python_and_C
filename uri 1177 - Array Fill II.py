li = []
n = int(input())
for i in range(0, 1000, n):
    for j in range(n):
        li.append(j)
for k in range(1000):
    print("N[%d] = %d" % (k, li[k]))
