start_day = input().split(" ")
start_day = int(start_day[1])
start_hour, start_min, start_sec = map(int, input().split(" : "))
end_day = input().split(" ")
end_day = int(end_day[1])
end_hour, end_min, end_sec = map(int, input().split(" : "))
day = end_day - start_day
hour = end_hour - start_hour
min = end_min - start_min
sec = end_sec - start_sec

if sec < 0:
    sec += 60
    min -= 1
if min < 0:
    min += 60
    hour -= 1
if hour < 0:
    hour += 24
    day -= 1
print(f"{day} dia(s)")
print(f"{hour} hora(s)")
print(f"{min} minuto(s)")
print(f"{sec} segundo(s)")
