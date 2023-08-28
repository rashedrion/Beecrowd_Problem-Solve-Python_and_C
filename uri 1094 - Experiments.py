N = int(input())
j = 1
c = r = s = total = 0
while j <= N:
    a, b = input().split(" ")
    a = int(a)
    total += a
    if b == 'R':
        r += a
    elif b == 'C':
        c += a
    else:
        s += a
    j += 1

print(f"Total: {total} cobaias")
print(f"Total de coelhos: {c}")
print(f"Total de ratos: {r}")
print(f"Total de sapos: {s}")
print("Percentual de coelhos: %.2f %%"%((c/total)*100))
print("Percentual de ratos: %.2f %%"%((r/total)*100))
print("Percentual de sapos: %.2f %%"%((s/total)*100))
