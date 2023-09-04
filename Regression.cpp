#include "LinealRegression.hpp"

int main(){
    int n;
    double a, b = 0;

    std::cout << "Ingrese la cantidad de medidas realizadas: ";
    std::cin >> n;

    struct Medidas *medidas;
    medidas = new Medidas[n];

    std::cout << "Ingrese uno a uno las mediciones, separando las mediciones de X y Y con un espacio\n";
    for (int i = 0; i < n; i++){
        std::cin >> medidas[i].x >> medidas[i].y;
    }
    
    LinealRegression(n, medidas, a, b);
    PrintResults(a, b);

    delete[] medidas;

    return 0;
}