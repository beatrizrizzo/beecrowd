from math import ceil

n,l,d = input().split(" ")

qtd_ml = int(n) * int(d) / (int(l) * 1000)

res = int(ceil(qtd_ml)) * int(l)


print(res)