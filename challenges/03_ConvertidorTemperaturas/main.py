def main():
    try:
        print("Ret 03: Transformador de Grados Fahrenheit a Celsius \n")

        fahrenheits = int(input("Ingresa la temperatura en grados Fahrenheit: "))
        celsiusTemp = ((fahrenheits - 32) * 5) / 9

        print("\nLa temperatura en grados Celsius es: " + str(celsiusTemp))

    except ValueError:
        print("Solo puedes ingresar números aqui")


if __name__ == "__main__":
    main()
