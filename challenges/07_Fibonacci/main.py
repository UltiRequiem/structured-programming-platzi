n = int(input("Ingrese número de términos para la sucesion: "))
a, b = 0,1
for i in range(n):
    print(a, end=' ')
    a, b = b, a + b