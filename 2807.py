n = int(input())

a = 1
b = 0
lst = []

for i in range(n):
    prox = a + b
    lst.append(prox)
    a = b
    b = prox
    
lst.reverse()
res = ""
for elemento in lst:
    res += str(elemento) + " "

print(res.rstrip(" "))