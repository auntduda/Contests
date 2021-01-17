c = int(input())

c=c-1

alunos = int(input())

viagens = alunos//c

if(alunos%c != 0):
    viagens += 1

print(viagens)