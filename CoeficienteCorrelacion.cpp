#include <iomanip>
#include <iostream>
#include <cmath>

using namespace std;

double SumatoriaX(double x[]);
double SumatoriaXX(double x[]);
double SumatoriaY(double y[]);
double SumatoriaYY(double y[]);
double SumatoriaXY(double x[], double y[]);


int main()
{   
    int n;
    double sumaIndependiete, sumaDependiente, sumaProducto, sumaCuadradoIndependiente, sumaCuadradoDependiente;

    cout << "Ingrese el número de mediciones que se han tomado: ";
    cin >> n;

    double vIndependiente[n], vDependiente[n];

    cout << "Ingrese uno a uno las mediciones de la variable independiente, de manera ordenada:\n";
    for (int i = 0; i < n; i++)
    {
        cout << i+1 << ". ";
        cin >> vIndependiente[i];
    }

    cout << "Ahora, ingrese las mediciones de la variable dependiente de acuerdo de manera ordenada:\n";
    for (int i = 0; i < n; i++)
    {
        cout << i+1 << ". " << vIndependiente[i] << " ";
        cin >> vDependiente[i];
    }
    
    system("clear"); //En linux es "clear", pero en windows es "cls"

    for (int i = 0; i < n; i++)
    {
        cout << i+1 << ". " << vIndependiente[i] << " " << vDependiente[i] << endl;
    }

    sumaIndependiete = SumatoriaX(vIndependiente);
    sumaDependiente = SumatoriaY(vDependiente);
    sumaProducto = SumatoriaXY(vIndependiente, vDependiente);
    sumaCuadradoIndependiente = SumatoriaXX(vIndependiente);
    sumaCuadradoDependiente = SumatoriaYY(vDependiente);

    return 0;
}

double SumatoriaX(int n, double x[])
{
    double total = 0;

    for (int i = 0; i < n; i++)
    {
        total += x[i];
    }

    return total;
}

double SumatoriaXX(int n, double x[])
{
    double total = 0;

    for (int i = 0; i < n; i++)
    {
        total += (x[i] * x[i]);
    }

    return total;
}

double SumatoriaY(int n, double y[])
{
    double total = 0;

    for (int i = 0; i < n; i++)
    {
        total += y[i];
    }

    return total;
}

double SumatoriaYY(int n, double y[])
{
    double total = 0;

    for (int i = 0; i < n; i++)
    {
        total += (y[i] * y[i]);
    }

    return total;
}

double SumatoriaXY(int n, double x[], double y[])
{
    double total = 0;

    for (int i = 0; i < n; i++)
    {
        total += (x[i] * y[i]);
    }

    return total;
}