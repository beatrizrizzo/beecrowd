n = int(input())

for i in range(n):
    a,b=input().split()
    tam = len(b)
    if a[-tam:] == b:
        print("encaixa")
    else:
        print("nao encaixa")
    
    