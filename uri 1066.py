even = 0
odd = 0
positive = 0
negative = 0
i = 0
while i < 5:
    num = int(input())
    if num % 2 == 0:
        even += 1
    else:
        odd += 1
    if num > 0:
        positive += 1
    if num < 0:
        negative += 1
    i += 1
print(f"{even} valor(es) par(es)")
print(f"{odd} valor(es) impar(es)")
print(f"{positive} valor(es) positivo(s)")
print(f"{negative} valor(es) negativo(s)")
