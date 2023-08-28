o = input()
v = []
s = 0
for i in range(12):
    col = []
    for j in range(12):
        col.append(float(input()))
    v.append(col)
for i in range(1,11):
    for j in range(7,12):
        if j>i and j>11-i:
            s += v[i][j]
if o == 'S':
    print("%.1f"%s)
if o == 'M':
    print("%.1f"%(s/30))
