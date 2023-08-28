values = float(input())
if values >= 0 and values <= 25:
    print("Intervalo [0,25]")
elif values > 25 and values <= 50:
    print("Intervalo (25,50]")
elif values > 50 and values <= 75:
    print("Intervalo (50,75]")
elif values > 75 and values <= 100:
    print("Intervalo (75,100]")
else:
    print("Fora de intervalo")
