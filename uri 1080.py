j = 1
gn = 0
while j <= 100:
    N = int(input())
    if N > gn:
        gn = N
        position = j
    j += 1
print(gn)
print(position)
