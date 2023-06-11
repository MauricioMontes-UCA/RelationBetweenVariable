#include "Sumatorias.cpp"
#include <iomanip>

double Pendiente(int n, double x[], double y[]);
double InterpectoY(int n, double x[], double y[]);

int main(){
    int medidas;
    double m, b = 0;

    cout << "Ingrese la cantidad de medidas realizadas: ";
    cin >> medidas;

    double vIndependiente[medidas], vDependiente[medidas];

    cout << "Ingrese uno a uno las mediciones de la variable independiente, de manera ordenada:\n";
    for (int i = 0; i < medidas; i++){
        cout << i+1 << ". ";
        cin >> vIndependiente[i];
    }

    cout << "Ahora, ingrese las mediciones de la variable dependiente de acuerdo de manera ordenada:\n";
    for (int i = 0; i < medidas; i++){
        cout << i+1 << ". " << vIndependiente[i] << " ";
        cin >> vDependiente[i];
    }
    m = Pendiente(medidas, vIndependiente, vDependiente);
    b = InterpectoY(medidas, vIndependiente, vDependiente);

    cout << "La pendiente de la ecuación es: " << fixed << setprecision(4) << m << endl;
    cout << "El intercepto-Y de la ecuación es: " << fixed << setprecision(4) << b << endl;
    cout << "\nLa ecuación lineal que relaciona las dos variables es: y = ";
    cout << fixed << setprecision(4) << m << "x + " << b << endl;
    
    return 0;
}

double Pendiente(int n, double x[], double y[]){
    double sumaIndependiete = SumatoriaX(n, x);
    double sumaDependiente = SumatoriaY(n, y);
    double sumaCuadradoIndependiente = SumatoriaXX(n, x);
    double sumaProducto = SumatoriaXY(n, x, y);
    
    return (
        ((n * sumaProducto) - (sumaIndependiete * sumaDependiente)) /
        ((n * sumaCuadradoIndependiente) - (sumaIndependiete * sumaIndependiete))
        );
}

double InterpectoY(int n, double x[], double y[]){
    double sumaIndependiete = SumatoriaX(n, x);
    double sumaDependiente = SumatoriaY(n, y);
    double sumaCuadradoIndependiente = SumatoriaXX(n, x);
    double sumaProducto = SumatoriaXY(n, x, y);
    
    return (
        ((sumaDependiente * sumaCuadradoIndependiente) - (sumaIndependiete * sumaProducto)) /
        ((n * sumaCuadradoIndependiente) - (sumaIndependiete * sumaIndependiete))
    );
}