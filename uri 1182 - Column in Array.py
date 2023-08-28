n = int(input())
o = input()
v = []
s = 0
for i in range(12):
    col = []
    for j in range(12):
        col.append(float(input()))
        if j == n:
            s += col[j]
    v.append(col)
if o == 'S':
    print("%.1f"%s)
if o == 'M':
    print("%.1f"%(s/12))
