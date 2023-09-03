#include <iostream>

using namespace std;

void ListaFacturas(float dinero[]); //Simplemente utiliza una lista con las cantidades a pagar por servicio e imprime las facturas

float Cambio(float dinero[], float pago, int factura); //Por medio de esta función, se determina cuanto es el cambio si el pago excede la deuda

int SalirMenu();

int main()
{
    int repetidor = 0;
    int servicio, factura, opcion = 0;
    float pagar, cambio;
    float deuda[3] = {3.21, 23.15, 16.45};

    cout << "Bienvenido. ";

    while(repetidor == 0)
    {
        cout << "Ingrese una de las opciones del menu para realizar una accion:\n";
        cout << "1. Mostrar pagos pendientes\n";
        cout << "2. Pagar facturas\n";

        cin >> servicio;

        switch (servicio)
        {
        case 1: //Lista de facturas a pagar
            ListaFacturas(deuda);
            repetidor = SalirMenu();
            break;
        
        case 2: //Para pagar. Se ingresa que factura se desea pagar, y cuanto va a pagar. Se imprime cuanto de cambio tendrá.
                //Además, si una factura ya fue pagada, no debe poder accederse a ella.

            cout << "Ingrese la factura que usted desea pagar:\n1. Agua\n2. Energia Electrica\n3. Alcaldia\n";
            cin >> factura;
            if (factura == 3)
            {
                cout << "No es posible pagar esta factura por este medio.\n";
            }
            else if (deuda[factura - 1] > 0)
            {
                cout << "Ingrese la cantidad de dinero a pagar:\n$";
                cin >> pagar;
                cambio = (Cambio(deuda, pagar, factura));
                if (pagar < deuda[factura - 1])
                {
                    deuda[factura - 1] -= pagar;
                }
                else
                {
                    deuda[factura - 1] = 0;
                }
                cout << "Su pago ha sido exitoso. Su cambio es de $";
                cout << cambio << endl;
                repetidor = SalirMenu();
            }
            else
            {
                cout << "La factura seleccionada ya ha sido pagada\n";
                repetidor = SalirMenu();
            }
            break;

        default:
            cout << "Por favor, ingrese una de las opciones del menu";
            break;
        }
    }
    cout << "Que tenga un buen dia";
    return 0;
}

void ListaFacturas(float dinero[]){
    cout << "Las facturas a pagar son las siguientes:\n";
    cout << "Agua ($" << dinero[0] << ") (Disponible)\n";
    cout << "Energia electrica ($" << dinero[1] << ") (Disponible)\n";
    cout << "Alcaldia ($" << dinero[2] << ") (No disponible)\n";
}

float Cambio(float dinero[], float pago, int factura)
{
    float cambio = pago - dinero[factura - 1];
    if(cambio > 0)
    {
        return cambio;
    }
    else
    {
        return 0;
    }
}

int SalirMenu()
{
    int opcion;
    cout << "Desea realizar alguna otra accion?\n1. Si\n2. No\n";
    cin >> opcion;
    if (opcion == 2)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}