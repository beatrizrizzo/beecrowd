# Solicita ao usuário que insira números separados por espaços
numeros = input()

# Converte a string de entrada em uma lista de inteiros
lista_numeros = list(map(int, numeros.split()))
lista_numeros_ordenada = lista_numeros[:]


lista_numeros_ordenada.sort()

for i in lista_numeros_ordenada:
    print(i)
print()
for i in lista_numeros:
    print(i)