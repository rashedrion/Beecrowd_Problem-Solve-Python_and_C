N = int(input())
j = 1
while j <= N:
    num = int(input())
    if num == 0:
        print("NULL")
    elif num % 2 == 0 > num:
        print("EVEN NEGATIVE")
    elif num % 2 != 0 > num:
        print("ODD NEGATIVE")
    elif num % 2 == 0 < num:
        print("EVEN POSITIVE")
    elif num % 2 != 0 < num:
        print("ODD POSITIVE")
    j = j + 1
