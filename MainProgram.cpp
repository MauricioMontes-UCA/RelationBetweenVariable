#include <iostream>

using namespace std;

float Suma(float num1, float num2);
void DivisorDeTexto();

struct Comida
{
    int index;
    string nombre;
    float precio;
};

int main()
{
    //Un simple programa para imprimir números del uno al diez
    int oneToTen[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    for (int i = 0; i < 9; i++)
    {
        cout << oneToTen[i] << ", ";
    }
    cout << oneToTen[10-1];

    DivisorDeTexto();

    //Practicando un poco con struct
    struct Comida producto1;
    
    producto1.index = 1;
    producto1.nombre = "Hamburguesa";
    producto1.precio = 2.75;

    cout << endl;
    cout << producto1.index << endl;
    cout << producto1.nombre << endl;
    cout << producto1.precio << endl; 
    
    return 0;
}

float Suma(float num1, float num2)
{
    return num1 + num2;
}

void DivisorDeTexto()
{
    cout << endl;
    for (int i = 0; i < 30; i++)
    {
        cout << "-";
    }
}