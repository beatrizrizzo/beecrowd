c = int(input())

for _ in range(c):
    n,m = map(int, input().split())
    if n % m == 0: print(n/m)
    else: print(int(n/m + 1))