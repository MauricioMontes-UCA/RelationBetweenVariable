#include "LinealRegression.hpp"
#include <iomanip>

int main(){
    int size;
    double a, b = 0;

    std::cout << "Ingrese la cantidad de medidas realizadas: ";
    std::cin >> size;

    struct Medidas *measures;
    measures = new Medidas[size];

    std::cout << "Ingrese uno a uno las mediciones, separando las mediciones de X y Y con un espacio\n";
    for (int i = 0; i < 5; i++){
        std::cin >> measures[i].x >> measures[i].y;
    }

    LinealRegression(size, measures, a, b);

    delete[] measures;

    std::cout << "La pendiente de la ecuación es: " << fixed << setprecision(4) << m << std::endl;
    std::cout << "El intercepto-Y de la ecuación es: " << fixed << setprecision(4) << b << std::endl;
    std::cout << "\nLa ecuación lineal que relaciona las dos variables es: y = ";
    std::cout << fixed << setprecision(4) << m << "x + " << b << std::endl;
    
    return 0;
}