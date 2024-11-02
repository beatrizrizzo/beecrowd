while True:
    entrada = input()
    altura, largura = map(int, entrada.split())
    if altura == 0 and largura == 0:
        break
    novo_desenho = ("")
    desenho = [0]*altura
    for i in range(altura):
        desenho[i] = input()
    entrada_n = input()
    altura_n, largura_n = map(int, entrada_n.split())
    alturaR = int(altura_n/altura)
    larguraR = int(largura_n/largura)
    for i in range(altura):
        for l in range(len(desenho[i])):
            novo_desenho+=desenho[i][l]*larguraR
        for _ in range(alturaR):
            print(novo_desenho)
        novo_desenho = ("")
        print()