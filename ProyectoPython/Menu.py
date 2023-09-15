from os import system

def Limpiar_pantalla() -> None:
    system('clear')
    
    return None
    
def Logo() -> None:
    print("\n"
        "\t\t\t:::::::::::  ::::::::  ::::::::::\n"
        "\t\t\t    :::     :::    ::: :::       \n"
        "\t\t\t    :::     :::        :::       \n"
        "\t\t\t    :::     :::::::::: ::::::::  \n"
        "\t\t\t    :::            ::: :::       \n"
        "\t\t\t    :::     :::    ::: :::       \n"
        "\t\t\t    :::      ::::::::  ::::::::::\n")
    print("\n")
    
    return None

def Menu_principal() -> int:
    Limpiar_pantalla()
    Logo()
    
    nombre: str = "Tribunal Supremo Electoral"
    lema: str = "Contando uno a uno el futuro"
    
    print("\n|" + nombre + ":" * (80-len(nombre)) + "|\n")
    print("\n|" + lema + ":" * (80-len(lema)) + "|\n")
    
    opcion_1: str = "Opciones administrativas"
    opcion_2: str = "Opciones generales"
    opcion_3: str = "Salir"
    
    print(" ")
    print("|" + opcion_1 + " " * (40-len(opcion_1) + 40 - 3) + "[1]|")
    print("|" + opcion_2 + " " * (40-len(opcion_2) + 40 - 3) + "[2]|")
    print("|" + opcion_3 + ":" * (40-len(opcion_3) + 40 - 3) + "[3]|")
    
    opcion: int = input();
    
    match opcion:
        case 1:
            Menu_Administrador()
        
        case 2:
            Menu_Usuario()
        
        case 3:
            return 1
        
        case _:
            return 1
    