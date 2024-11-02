n = int(input())

for i in range(n):
    senha = input()
    qtd = 1
    for letra in senha:
        if letra.lower() == 'a' or letra.lower() == 'e' or letra.lower() == 'i' or letra.lower() == 'o' or letra.lower() == 's':
            qtd = qtd * 3
        else:
            qtd = qtd * 2
    print(qtd)
