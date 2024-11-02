try:
    while (True):
        n, d= input().split(' ')
        n = int(n)
        d = int(d)
        datas = []
        c = 0

        for i in range(d):
            datas.append(input())

        for dia in datas:
            pessoas = dia.split(' ')
            soma = pessoas[1:]
            lista_de_ints = list(map(int, soma))
            c = c + 1

            if sum(lista_de_ints) == n:
                print(pessoas[0])
                break
            if c == d:
                print("Pizza antes de FdI")
except EOFError:
    pass