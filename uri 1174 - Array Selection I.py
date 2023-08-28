li = []
for i in range(100):
    li.append(float(input()))
for i in range(100):
    if li[i] <= 10:
        print("A[%d] = %.1f"%(i, li[i]))
