r = input().split()
a, b, c = r
a, b, c = int(a), int(b), int(c)
maiorAB = ((a + b + abs(a-b)) / 2 )
maior = ((maiorAB + c + abs(maiorAB -c)) / 2)
print(f"{int(maior)} eh o maior")
