#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

double Phi();

int main(){
    
    cout << fixed << setprecision(15) << Phi() << endl;
    cout << ((Phi() * Phi()) - Phi() - 1) << endl;
    cout << ((Phi() * Phi())-(1/Phi())) << endl;

    return 0;
}

double Phi(){
    return ((1+sqrt(5))/2);
}