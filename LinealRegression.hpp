#include "Sumatorias.hpp"
#include <iomanip>

//Se espera que entre los parámetros, se pase por referencia una variable que contendrá los valores de la pendiente y el intercepto-y
void LinealRegression(int n, Medidas measures[], double &slope, double &yIntercept){
    double sumX, sumXX, sumY, sumYY, sumXY = 0;
    SumatoriaX(n, measures, sumX);
    SumatoriaXX(n, measures, sumXX);
    SumatoriaY(n, measures, sumY);
    SumatoriaYY(n, measures, sumYY);
    SumatoriaXY(n, measures, sumXY);

    slope = (((n * sumXY) - (sumX * sumY)) / ((n * sumXX) - (sumX * sumX)));
    yIntercept = (((sumY * sumXX) - (sumX * sumXY)) / ((n * sumXX) - (sumX * sumX))); 
}

void PrintResults(double slope, double yIntercept){
    std::cout << "La pendiente de la ecuación es: " << std::fixed << std::setprecision(4) << slope << std::endl;
    std::cout << "El intercepto-Y de la ecuación es: " << std::fixed << std::setprecision(4) << yIntercept << std::endl;
    std::cout << "\nLa ecuación lineal que relaciona las dos variables es: y = ";
    std::cout << std::fixed << std::setprecision(4) << slope << "x + " << yIntercept << std::endl;
}