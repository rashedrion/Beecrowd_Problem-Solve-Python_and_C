sec = int(input())
h = int(sec / 3600)
sec = sec % 3600
m = int(sec / 60)
sec = sec % 60
print(f"{h}:{m}:{sec}")
