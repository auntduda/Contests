def fatorial(n):
    i = n
    fatorial = 1

    while(i > 1):
        fatorial = fatorial * i

        i -= 1

    return fatorial

entrada = int(input())

cont = entrada
qtd=0

while(cont != 0):
    fat = fatorial(cont)

    if((entrada - fat) > 0):
        qtd += 1
        entrada = entrada-fat

    cont = entrada

print(qtd)