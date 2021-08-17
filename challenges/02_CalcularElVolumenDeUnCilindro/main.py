def main():

    radio = int(input("Ingresa el radio de la base: "))

    area = radio * 3.1416

    altura = int(input("Ingresa la altura de la base: "))

    volumen = area * altura

    print("El volumen del cilindro es " + str(volumen))


if __name__ == "__main__":
    main()
