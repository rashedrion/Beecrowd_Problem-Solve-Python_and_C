N = int(input())
i = 0
o = 0
j = 0
while j < N:
    X = int(input())
    if 10 <= X <= 20:
        i += 1
    else:
        o += 1
    j += 1
print(f"{i} in")
print(f"{o} out")
