x = int(input())
first, second = 0, 1
for i in range(x):
    if i < 2:
        print(i,end=" ")
    else:
        next = first + second
        first = second
        second = next
        if i == x-1:
            print(next)
            break
        print(next,end=" ")
