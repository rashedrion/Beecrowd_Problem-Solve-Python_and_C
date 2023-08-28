value = float(input())
value = float("%0.2f" % value)
notas = [100, 50, 20, 10, 5, 2]
moedas = [1, 0.50, 0.25, 0.10, 0.05, 0.01]
if (value >= 0.00) and (value <= 1000000.00):
    print('NOTAS:')
    for note in notas:
        r = int(value / note)
        print('{} nota(s) de R$ {:.2f}'.format(r,note))
        value -= r * note
    print('MOEDAS:')
    for coin in moedas:
        r = int(round(value,2) / coin)
        print('{} moeda(s) de R$ {:.2f}'.format(r, coin))
        value -= r * coin
