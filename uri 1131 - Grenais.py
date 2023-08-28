game = inter = germio = draw = 0
while True:
    i, g = map(int, input().split(" "))
    game += 1
    if i > g:
        inter += 1
    elif i < g:
        germio += 1
    else:
        draw += 1
    print("Novo grenal (1-sim 2-nao)")
    n = int(input())
    if n == 2:
        print(f"{game} grenais")
        print(f"Inter:{inter}")
        print(f"Gremio:{germio}")
        print(f"Empates:{draw}")
        if inter > germio:
            print("Inter venceu mais")
        elif inter < germio:
            print("Gremio venceu mais")
        else:
            print("Não houve vencedor")
        break
