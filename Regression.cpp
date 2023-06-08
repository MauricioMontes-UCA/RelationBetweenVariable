#include <iostream>

using namespace std;

//Para la ecuación de tipo y = mx + b, necesito calcular m (la pendiente) y b (el intersecto con y)
float SlopeCalculation(int measures, float x[], float y[]);
float YIntersectCalculation(int measures, float slope, float x[], float y[]);

int main()
{
    int medidas, pendiente, intersectoY = 0;

    cout << "Ingrese la cantidad de medidas que se han realizado: ";
    cin >> medidas;

    float vDependiente[medidas];
    float vIndependiente[medidas];

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

float SlopeCalculation(int measures, float x[], float y[])
{
    float sumX, sumY, sumXY, sumXCuadrado, slope = 0;
    
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

float YIntersectCalculation(int measures, float slope, float x[], float y[])
{
    float yIntersect, sumY, sumX = 0;
    
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