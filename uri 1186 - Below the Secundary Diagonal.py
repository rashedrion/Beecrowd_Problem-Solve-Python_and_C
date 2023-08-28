o = input()
v = []
s = 0
for i in range(12):
    col = []
    for j in range(12):
        col.append(float(input()))
    v.append(col)
a = 11
for i in range(1,12):
    for j in range(a,12):
        s += v[i][j]
    a-=1
if o == 'S':
    print("%.1f"%s)
if o == 'M':
    print("%.1f"%(s/66))
