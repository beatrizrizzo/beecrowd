while True:
    m, n = input().split(' ')



    m = int(m)
    n = int(n)

    if m == 0 and n == 0:
        break



    resposta = m + n
    resposta = str(resposta)

    resposta = resposta.replace("0", "")
    print(resposta)