#include <iostream>
#include <iomanip>
#include <cmath>

void LimpiarPantalla();

int main(){
    
    for (int i = 0; i < 20; i++){
        cout << i;
    }

    return 0;
}

void LimpiarPantalla(){
    #ifdef _WIN32
    system("cls");
    cout << "Estas usando windows lmao";
    #elif __linux__
    system("clear");
    cout << "Estas usando linux lmao";
    #endif
}