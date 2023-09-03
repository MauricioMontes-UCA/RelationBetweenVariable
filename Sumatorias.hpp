#include <iostream>

void SumatoriaX(int n, double x[], double &sumX); //Para la sumatoria de la variable independiente
void SumatoriaXX(int n, double x[], double &sumXX); //Para la sumatoria de la variable dependiente
void SumatoriaY(int n, double y[], double &sumY); //Para la sumatoria de los cuadrados de la V.I
void SumatoriaYY(int n, double y[], double &sumYY); //Para la sumatoria de los cuadrados de la V.D
void SumatoriaXY(int n, double x[], double y[], double &sumXY); //Para la sumatoria del producto entre los pares ordendados

void SumatoriaX(int n, double x[], double &sumX){
    for (int i = 0; i < n; i++){
        sumX += x[i];
    }
}

void SumatoriaXX(int n, double x[], double &sumXX){
    for (int i = 0; i < n; i++){
        sumXX += (x[i] * x[i]);
    }
}

void SumatoriaY(int n, double y[], double &sumY){
    for (int i = 0; i < n; i++){
        sumY += y[i];
    }
}

void SumatoriaYY(int n, double y[], double &sumYY){
    for (int i = 0; i < n; i++){
        sumYY += (y[i] * y[i]);
    }
}

void SumatoriaXY(int n, double x[], double y[], double &sumXY){
    for (int i = 0; i < n; i++){
        sumXY += (x[i] * y[i]);
    }
}