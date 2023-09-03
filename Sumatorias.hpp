#include <iostream>

struct Medidas{
    double x;
    double y;
};

void SumatoriaX(int n, Medidas x[], double &sumX){
    for (int i = 0; i < n; i++){
        sumX += x[i].x;
    }
}

void SumatoriaXX(int n, Medidas x[], double &sumXX){
    for (int i = 0; i < n; i++){
        sumXX += (x[i].x * x[i].x);
    }
}

void SumatoriaY(int n, Medidas y[], double &sumY){
    for (int i = 0; i < n; i++){
        sumY += y[i].y;
    }
}

void SumatoriaYY(int n, Medidas y[], double &sumYY){
    for (int i = 0; i < n; i++){
        sumYY += (y[i].y * y[i].y);
    }
}

void SumatoriaXY(int n, Medidas xy[], double &sumXY){
    for (int i = 0; i < n; i++){
        sumXY += (xy[i].x * xy[i].y);
    }
}