n = int(input())
v = list(map(int,input().split()))
j = v[0]
for i in v:
    if i < j:
        j = i
print(f"Menor valor: {j}")
print(f"Posicao: {v.index(j)}")
