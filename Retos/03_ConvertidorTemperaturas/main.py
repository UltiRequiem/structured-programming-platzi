  
def main():

    fahrenheits = int(input('Ingresa la temperatura en grados Celsius: '))
    
    celsius = ((fahrenheits - 32) *5)/9

    print('La temperatura en grados Celsius es '+ str(celsius))

if __name__ == "__main__":
    main()