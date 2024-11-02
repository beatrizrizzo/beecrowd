n = float(input())

print("NOTAS:")
notas = int(n/100)
print(f"{notas} nota(s) de R$ 100.00")
n = n % 100

notas = int(n/50)
print(f"{notas} nota(s) de R$ 50.00")
n = n % 50

notas = int(n/20)
print(f"{notas} nota(s) de R$ 20.00")
n = n % 20

notas = int(n/10)
print(f"{notas} nota(s) de R$ 10.00")
n = n % 10

notas = int(n/5)
print(f"{notas} nota(s) de R$ 5.00")
n = n % 5

notas = int(n/2)
print(f"{notas} nota(s) de R$ 2.00")
n = n % 2

print("MOEDAS:")

moedas = int(n)
print(f"{moedas} moeda(s) de R$ 1.00")
n = n % 1

moedas = int(n/0.5)
print(f"{moedas} moeda(s) de R$ 0.50")
n = n % 0.5

moedas = int(n/0.25)
print(f"{moedas} moeda(s) de R$ 0.25")
n = n % 0.25

moedas = int(n/0.1)
print(f"{moedas} moeda(s) de R$ 0.10")
n = n % 0.1

moedas = int(n/0.05)
print(f"{moedas} moeda(s) de R$ 0.05")
n = n % 0.05

moedas = float(n / 0.01)
print("%0.0f moeda(s) de R$ 0.01" % moedas)