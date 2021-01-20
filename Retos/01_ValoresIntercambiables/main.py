  def main():
    X = input('Da el valor a X: ')
    Y = input('Da el valor a Y: ')

    intercambiador = X
    X = Y
    Y = intercambiador
    
    print("\nAhora X vale: "+ X)
    print("Ahora Y vale: "+ Y)
    print("Salu2") #XD


if __name__ == "__main__":
    main()
