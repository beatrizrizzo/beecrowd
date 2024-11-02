from math import isqrt, sqrt, ceil, floor

q = int(input())

for _ in range(q):
    l,r = map(int, input().split())
    qtdL= ceil(sqrt(l))
    qtdR = floor(sqrt(r))
    print(qtdR - qtdL + 1)
    