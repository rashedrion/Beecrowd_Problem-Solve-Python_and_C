list = list(map(int, input().split(" ")))
a = list[0]
n = list[len(list) -1 ]
sum = 0
for i in range(n):
    sum += a
    a += 1
print(sum)
