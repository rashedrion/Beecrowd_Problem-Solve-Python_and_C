N = int(input())
j = 1
while j <= N:
    a, b, c = map(float, input().split(" "))
    print("%.1f"%(((a*2) + (b*3) + (c*5)) / 10))
    j += 1
