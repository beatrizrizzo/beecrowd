l = int(input())

t = input()
m = []
for i in range(12):
   
    linha = []
    for j in range(12):
        linha.append(float(input()))
    
    m.append(linha)
soma= 0.0
if (t == "S"):
    for j in range(12):
        soma += m[l][j]
else:
    for j in range(12):
        soma += m[l][j]
    soma = soma/12


