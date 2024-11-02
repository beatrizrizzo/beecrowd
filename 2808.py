entrada = input()
lst = entrada.split(" ")

if abs(ord(lst[0][0]) - ord(lst[1][0])) == 1 and abs(ord(lst[0][1]) - ord(lst[1][1])) == 2:
    print("VALIDO")
elif abs(ord(lst[0][0]) - ord(lst[1][0])) == 2 and abs(ord(lst[0][1]) - ord(lst[1][1])) == 1:
    print("VALIDO")
else:
    print("INVALIDO")