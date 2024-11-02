linha = input()

qtdO = linha.count("O")

if (qtdO > 1 or qtdO == 0):
    print("?")
elif (linha[0] == "X" and linha[1] == "X" or linha[1] == "X" and linha[2] == "X"):
    print("Alice")
else:
    print("*")