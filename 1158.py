n = int(input())

lista_somas = []


for i in range(n):
    sum = 0
    cont = 0
    x,y = map(int, input().split())
    k = x
    while(cont != y):
        if(k % 2 != 0):
            cont = cont + 1
            sum = sum + k
            k = k+2
        else:
            k = k + 1
        
    lista_somas.append(sum)

for x in lista_somas:
    print(x)