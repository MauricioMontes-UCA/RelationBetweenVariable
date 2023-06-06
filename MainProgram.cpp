#include <iostream>

using namespace std;

struct Comida
{
    int index;
    string nombre;
    float precio;
};

int main()
{
    //Practicando un poco con struct
    struct Comida producto1;
    
    producto1.index = 1;
    producto1.nombre = "Hamburguesa";
    producto1.precio = 2.75;

    cout << producto1.index << endl;
    cout << producto1.nombre << endl;
    cout << producto1.precio << endl; 
    
    return 0;
}