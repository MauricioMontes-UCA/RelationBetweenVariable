#include <iostream>

double SumatoriaX(int n, double x[]); //Para la sumatoria de la variable independiente
double SumatoriaXX(int n, double x[]); //Para la sumatoria de la variable dependiente
double SumatoriaY(int n, double y[]); //Para la sumatoria de los cuadrados de la V.I
double SumatoriaYY(int n, double y[]); //Para la sumatoria de los cuadrados de la V.D
double SumatoriaXY(int n, double x[], double y[]); //Para la sumatoria del producto entre los pares ordendados

double SumatoriaX(int n, double x[]){
    double total = 0;

    for (int i = 0; i < n; i++){
        total += x[i];
    }
    return total;
}

double SumatoriaXX(int n, double x[]){
    double total = 0;

    for (int i = 0; i < n; i++){
        total += (x[i] * x[i]);
    }
    return total;
}

double SumatoriaY(int n, double y[]){
    double total = 0;

    for (int i = 0; i < n; i++){
        total += y[i];
    }
    return total;
}

double SumatoriaYY(int n, double y[]){
    double total = 0;

    for (int i = 0; i < n; i++){
        total += (y[i] * y[i]);
    }
    return total;
}

double SumatoriaXY(int n, double x[], double y[]){
    double total = 0;

    for (int i = 0; i < n; i++){
        total += (x[i] * y[i]);
    }
    return total;
}