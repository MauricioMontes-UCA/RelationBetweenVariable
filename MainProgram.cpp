#include <iostream>

using namespace std;

int main()
{
    //Un simple programa para imprimir números del uno al diez
    
    int oneToTen[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    for (int i = 0; i < 10; i++)
    {
        cout << oneToTen[i] << endl;
    }
    return 0;
}