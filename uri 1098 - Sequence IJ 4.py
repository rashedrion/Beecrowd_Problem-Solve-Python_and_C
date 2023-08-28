i = 0
while i <= 2:
    for j in range(1,4):
        if i == 0 or i == 1 or i > 1.8:
            print("I=%.f J=%d" % (i, i + j))
        else:
            print("I=%.1f J=%.1f"%(i, i+j))
    i += 0.2
