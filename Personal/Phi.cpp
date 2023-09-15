#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

struct Students{
    string name;
    int age;
    float grades;
};

double Phi();

int main(){
    struct Students *ptr = new Students[5];
    //cout << fixed << setprecision(15) << Phi() << endl;
    //cout << ((Phi() * Phi()) - Phi() - 1) << endl;
    //cout << ((Phi() * Phi())-(1/Phi())) << endl;

    cout << sizeof(*ptr);

    return 0;
}

double Phi(){
    return ((1+sqrt(5))/2);
}