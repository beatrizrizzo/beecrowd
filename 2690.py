n = int(input())

lista_nomes = []


for i in range(n):
    
    nome = input()
        
    lista_nomes.append(nome)

for x in lista_nomes:
    senha_criptografada = ""
    x =  x.replace(" ", "")
    x = x[:12]
    for letra in x:
        if letra in ['G', 'Q', 'a', 'k', 'u']:
            senha_criptografada = senha_criptografada + '0'
        elif letra in ['I', 'S', 'b', 'l', 'v']:
            senha_criptografada = senha_criptografada + '1'
        elif letra in ['E', 'O', 'Y', 'c', 'm', 'w']:
            senha_criptografada = senha_criptografada + '2'
        elif letra in ['F', 'P', 'Z', 'd', 'n', 'x']:
            senha_criptografada = senha_criptografada + '3'
        elif letra in ['J', 'T', 'e', 'o', 'y']:
            senha_criptografada = senha_criptografada + '4'
        elif letra in ['D', 'N', 'X', 'f', 'p', 'z']:
            senha_criptografada = senha_criptografada + '5'
        elif letra in ['A', 'K', 'U', 'g', 'q']:
            senha_criptografada = senha_criptografada + '6'
        elif letra in ['C', 'M', 'W', 'h', 'r']:
            senha_criptografada = senha_criptografada + '7'
        elif letra in ['B', 'L', 'V', 'i', 's']:
            senha_criptografada = senha_criptografada + '8'
        else:
            senha_criptografada = senha_criptografada + '9'

    print(senha_criptografada)