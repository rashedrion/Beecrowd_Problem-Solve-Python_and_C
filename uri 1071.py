X = int(input())
Y = int(input())
sum = 0
for n in range(Y+1, X):
    if n % 2 != 0:
        sum += n
print(sum)
