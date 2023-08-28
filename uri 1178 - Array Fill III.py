li = []
n = float(input())
for i in range(0, 100):
        li.append(n)
        n = n / 2
for k in range(100):
    print("N[%d] = %.4f" % (k, li[k]))
