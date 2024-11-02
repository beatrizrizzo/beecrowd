n = int(input())

for i in range(n):
    qtd= 0 
    m = int(input())

    notas = [int(x) for x in input().split(' ')]
    notas_ordenadas = sorted(notas, reverse=True)

    for i in range(m):
        if notas_ordenadas[i] == notas[i]:
            qtd+=1
    print(qtd)