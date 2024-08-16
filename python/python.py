def HolaMundo ():
    print("Hola Mundo")

def ObtenerEdad():
    edad = input("Ingrese su edad: ")
    print(f"Su edad es: {edad}")

def CalcularEdad():
    anio_nacimiento = int(input("Ingrese su anio de nacimiento: "))
    edad = 2024 - anio_nacimiento
    print(f"Su edad es: {edad}")

HolaMundo()
ObtenerEdad()
CalcularEdad()