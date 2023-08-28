li = [0,1]
for i in range(2,61):
    li.append(li[i-1] + li[i-2])
t = int(input())
for i in range(t):
    n = int(input())
    print("Fib(%d) = %d"%(n, li[n]))
