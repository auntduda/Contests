qtd = input()

jogadas = input()

qtd = len(jogadas)

jogadores = []

for i in range(qtd):
    jogadores.append(0)

qtd_p=0
qtd_r=0
qtd_s=0

for i in range(qtd):
    if jogadas[i] == 'P':
        qtd_p = qtd_p + 1
    if jogadas[i] == 'R':
        qtd_r = qtd_r + 1
    if jogadas[i] == 'S':
        qtd_s = qtd_s + 1

for i in range(qtd):
    if jogadas[i] == 'P':
        jogadores[i] = qtd_r - qtd_s
    if jogadas[i] == 'R':
        jogadores[i] = qtd_s - qtd_p
    if jogadas[i] == 'S':
        jogadores[i] = qtd_p - qtd_r

print(jogadores.count(max(jogadores)))