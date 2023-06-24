#include "sumatorias.hpp"
#include <iomanip>
#include <cmath>

using namespace std;

//Esta cosa utiliza directivas para que el programa no crashee en la PC del Carlos, porque es el único que
//usa Linux como sistema operativo en la clase de fundamentos. Una pendejada, pero tiene una pc del gobierno
//que no soporta ni el Windows XP, asi que qué se le va a hacer
void LimpiarPantalla();

//En fin, estoy siguiendo una de las fórmulas para el coeficiente de correlación muestral, que es el que
//mejor se ajusta a lo que queremos hacer. De momento solo sé obtener el coeficiente, pero estaría bien
//poder trabajar con la tabla para poder decir que porcentaje de probabilidad hay de que la relación
//entre variables no sea igual.

int main(){   
    int n;
    //Perdonen los nombres largos. Se trabaja con double porque permite usar más decimales
    double sumaIndependiete, sumaDependiente, sumaProducto, sumaCuadradoIndependiente, sumaCuadradoDependiente;
    double coeficiente;

    cout << "Ingrese el número de mediciones que se han tomado: ";
    cin >> n;

    double vIndependiente[n], vDependiente[n];
    //Una vez con la variable "n" tiene un valor dado por el usuario, se usa ese valor entero para definir
    //el tamaño de las listas, para que se pueda realizar este trabajo con la cantidad de medidas que el
    //usuario haya tomado

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
    //De aquí se agrega la ayuda del valor de la variable independiente para facilitar completar el par
    //ordenado de cada medición
    
    LimpiarPantalla();

    cout<<setfill('.')
        << "|"
        << setw(5) << left << "N"
        << "|"
        << setw(5) << left << "X"
        << "|"
        << setw(5) << left << "Y"
        << "|"
        << endl;
    
    for (int i = 0; i < n; i++){
        cout<<setfill(' ')
            << "|"
            << setw(5) << left << i+1
            << "|"
            << setw(5) << left << vIndependiente[i]
            << "|"
            << setw(5) << left << vDependiente[i]
            << "|"
            << endl;
    }
    //Imprime la "tabla" nuevamente, y luego debería lanzar el valor correcto del coeficiente de covarianza

    sumaIndependiete = SumatoriaX(n, vIndependiente);
    sumaDependiente = SumatoriaY(n, vDependiente);
    sumaProducto = SumatoriaXY(n, vIndependiente, vDependiente);
    sumaCuadradoIndependiente = SumatoriaXX(n, vIndependiente);
    sumaCuadradoDependiente = SumatoriaYY(n, vDependiente);

    coeficiente = (
        ((n * sumaProducto) - (sumaIndependiete * sumaDependiente)) /
        sqrt(
            ((n * sumaCuadradoIndependiente) - (sumaIndependiete * sumaIndependiete)) *
            ((n * sumaCuadradoDependiente) - (sumaDependiente * sumaDependiente))
        )
    );
    //Esta cosa de aquí arriba es horrible, pero hace lo que se supone debe de hacer. Además, es la única razón
    //por la que se ha importado "cmath"

    cout << "\nEl coeficiente de correlación es: " << fixed << setprecision(4) << coeficiente;
    //Y esto de aquí arriba es la única razón de ser del "iomanip", pero hey, muestra 4 decimales sí o sí

    return 0;
}

void LimpiarPantalla(){
    #ifdef _WIN32
    system("cls");
    #elif __linux__
    system("clear");
    #endif
}