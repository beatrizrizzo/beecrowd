_ = input()
salario = float(input())
vendas = float(input())

comissao = vendas * 0.15
total = salario + comissao
total = f"{total:.2f}"
print("TOTAL = R$ "+ total)