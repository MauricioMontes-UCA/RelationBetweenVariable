#include <iostream>

//Todas las medidas se conforman por un punto coordenada entre la variable independiente y la variable dependiente. Por ello, se crea un estructura
//con la cual se definirá un arreglo que contendrá todas las medidas para evaluarlas.
struct Medidas{
    double x;
    double y;
};

//Sumatoria de la variable independiente
void SumatoriaX(int n, Medidas m[], double &sumX){
    for (int i = 0; i < n; i++){
        sumX = sumX + (m[i].x);
    }
}

//Sumatoria del cuadrado de la variable independiente
void SumatoriaXX(int n, Medidas m[], double &sumXX){
    for (int i = 0; i < n; i++){
        sumXX = sumXX + ((m[i].x) * (m[i].x));
    }
}

//Sumatoria de la variable dependiente
void SumatoriaY(int n, Medidas m[], double &sumY){
    for (int i = 0; i < n; i++){
        sumY = sumY + (m[i].y);
    }
}

//Sumatoria del cuadrado de la variable dependiente
void SumatoriaYY(int n, Medidas m[], double &sumYY){
    for (int i = 0; i < n; i++){
        sumYY = sumYY + ((m[i].y) * (m[i].y));
    }
}

//Sumatoria del producto entre la variable dependiente e independiente
void SumatoriaXY(int n, Medidas m[], double &sumXY){
    for (int i = 0; i < n; i++){
        sumXY = sumXY + ((m[i].x) * (m[i].y));
    }
}