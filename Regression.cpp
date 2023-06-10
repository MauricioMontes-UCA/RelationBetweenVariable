#include <iostream>

using namespace std;

double SlopeCalculation(int measures, double x[], double y[]);
double YIntersectCalculation(int measures, float slope, double x[], double y[]);

int main()
{
    int medidas, pendiente, intersectoY = 0;

    cout << "Ingrese la cantidad de medidas que se han realizado: ";
    cin >> medidas;

    double vDependiente[medidas];
    double vIndependiente[medidas];

    cout << "Ingrese las medidas de la variable independiente de manera ordenada:\n";
    
    for (int i = 0; i < medidas; i++)
    {
        cout << i+1 << ". ";
        cin >> vIndependiente[i];
    }

    cout << "\nIngrese las medidas de la variable dependiente correspondiente a la de la variable independiente:\n";

    for (int i = 0; i < medidas; i++)
    {
        cout << i+1 << ". " << vIndependiente[i] << " ";
        cin >> vDependiente[i];
    }

    pendiente = SlopeCalculation(medidas, vIndependiente, vDependiente);
    intersectoY = YIntersectCalculation(medidas, pendiente, vIndependiente, vDependiente);

    cout << "\nLa ecuación lineal que relaciona las dos variables es la siguiente: ";
    cout << "y = " << pendiente << "x + " << intersectoY << endl;

    return 0;
}

double SlopeCalculation(int measures, double x[], double y[])
{
    double sumX, sumY, sumXY, sumXCuadrado, slope = 0;
    
    for (int i = 0; i < measures; i++)
    {
        sumX += x[i];
    }
    
    for (int i = 0; i < measures; i++)
    {
        sumY += y[i];
    }
    
    for (int i = 0; i < measures; i++)
    {
        sumXY += (x[i] * y[i]);
    }

    for (int i = 0; i < measures; i++)
    {
        sumXCuadrado += (x[i] * x[i]);
    }

    slope = (((measures * sumXY) - (sumX * sumY)) / ((measures * sumXCuadrado) - (sumX * sumX)));

    return slope;
}

double YIntersectCalculation(int measures, double slope, double x[], double y[])
{
    double yIntersect, sumY, sumX = 0;
    
    for (int i = 0; i < measures; i++)
    {
        sumX += x[i];
    }
    
    for (int i = 0; i < measures; i++)
    {
        sumY += y[i];
    }
    
    yIntersect = (sumY - (sumX * slope))/measures;

    return yIntersect;
}