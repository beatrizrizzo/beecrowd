from math import isqrt

n = int(input())

for _ in range(n):
    qtd = int(input())
    x = isqrt(qtd)
    print(qtd-x)


