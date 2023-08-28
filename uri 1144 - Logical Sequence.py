N = int(input())
l = 1
for i in range(N):
    print(f"{l} {l*l} {l*l*l}")
    print(f"{l} {(l*l)+1} {(l*l*l)+1}")
    l += 1
