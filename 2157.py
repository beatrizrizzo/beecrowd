n = int(input())

for i in range(n):
    a,b = map(int, input().split())
    lst = ""
    for x in range(a,b+1):
        lst += str(x)
    print("" + lst + lst[::-1])
    