#include "Sumatorias.hpp"
#include <iomanip>

void LinealRegression(int n, struct measures[], double &slope, double &yIntercept){
    double, sumX, sumXX, sumY, sumYY, sumXY = 0;
    SumatoriaX(n, measures, sumX);
    SumatoriaXX(n, measures, sumXX);
    SumatoriaY(n, measures, sumY);
    SumatoriaYY(n, measures, sumYY);
    SumatoriaXY(n, measures, sumXY);

    slope = (((n * sumXY) - (sumX * sumY)) / ((n * sumXX) - (sumX * sumX)));
    yIntercept = (((sumY * sumXX) - (sumX * sumXY)) / ((n * sumXX) - (sumX * sumX))); 
}