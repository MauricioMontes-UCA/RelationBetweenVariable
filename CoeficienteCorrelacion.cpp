#include <iomanip>
#include <iostream>
#include <cmath>

using namespace std;

void LimpiarPantalla();

double SumatoriaX(int n, double x[]);
double SumatoriaXX(int n, double x[]);
double SumatoriaY(int n, double y[]);
double SumatoriaYY(int n, double y[]);
double SumatoriaXY(int n, double x[], double y[]);


int main(){   
    int n;
    double sumaIndependiete, sumaDependiente, sumaProducto, sumaCuadradoIndependiente, sumaCuadradoDependiente;

    cout << "Ingrese el número de mediciones que se han tomado: ";
    cin >> n;

    double vIndependiente[n], vDependiente[n];

    cout << "Ingrese uno a uno las mediciones de la variable independiente, de manera ordenada:\n";
    for (int i = 0; i < n; i++){
        cout << i+1 << ". ";
        cin >> vIndependiente[i];
    }

    cout << "Ahora, ingrese las mediciones de la variable dependiente de acuerdo de manera ordenada:\n";
    for (int i = 0; i < n; i++){
        cout << i+1 << ". " << vIndependiente[i] << " ";
        cin >> vDependiente[i];
    }
    
    LimpiarPantalla();

    for (int i = 0; i < n; i++){
        cout << i+1 << ". " << vIndependiente[i] << " " << vDependiente[i] << endl;
    }

    sumaIndependiete = SumatoriaX(n, vIndependiente);
    sumaDependiente = SumatoriaY(n, vDependiente);
    sumaProducto = SumatoriaXY(n, vIndependiente, vDependiente);
    sumaCuadradoIndependiente = SumatoriaXX(n, vIndependiente);
    sumaCuadradoDependiente = SumatoriaYY(n, vDependiente);

    cout << "La sumatoria de las medidas de la variable independiente es: ";
    cout << sumaIndependiete << endl;
    cout << "La sumatoria de las medidas de la variable dependiente es: ";
    cout << sumaDependiente << endl;
    cout << "La sumatoria del producto entre los pares ordenados de las medidas es: ";
    cout << sumaProducto << endl;
    cout << "La sumatoria del cuadrado de las medidas de la variable independiente es: ";
    cout << sumaCuadradoIndependiente << endl;
    cout << "La sumatoria del cuadrado de las medidas de la variable dependiente es:";
    cout << sumaCuadradoDependiente << endl;

    return 0;
}

void LimpiarPantalla(){
    #ifdef _WIN32
    system("cls");
    #elif __linux__
    system("clear");
    #endif
}

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