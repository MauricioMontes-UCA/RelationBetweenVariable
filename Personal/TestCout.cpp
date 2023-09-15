#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    cout << setfill(':')
            << "|"
            << setw(80) << left << "Tribunal Supremo Electoral"
            << "|"
            << endl
            << endl
            << "|"
            << setw(80) << left << "Contando uno a uno el futuro"
            << "|"
            << endl
            << endl;

    cout << setfill(' ')
         << "|"
         << setw(40) << left << "Opciones Administrador"
         << setw(40) << right << "[1]"
         << "|"
         << endl
         << "|"
         << setw(40) << left << "Opciones Generales"
         << setw(40) << right << "[2]"
         << "|"
         << endl;

    cout << setfill(':')
         << "|"
         << setw(40) << left << "Salir"
         << setw(40) << right << "[3]"
         << "|"
         << endl;
    
    return 0;
};