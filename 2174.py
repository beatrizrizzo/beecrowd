entrada = int(input())
lista = []
for _ in range(entrada):
    a = input()
    lista.append(a)
restante = list(set(lista))
print(f"Falta(m) {151 - len(restante)} pomekon(s).")