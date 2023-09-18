#include "Stack.hpp"

int main(){
    int numberValue;
    std::string wordValue;

    std::cout << IsEmpty() << std::endl << std::endl;

    for (int i=0; i < 5; i++){
        std::cout << "Ingrese una palabra: ";
        std::cin >> wordValue;

        Push(i+1, wordValue);
    }

    std::cout << IsEmpty() << std::endl << std::endl;

    Print();
    Pop();

    std::cout << std::endl;

    LastElement(numberValue, wordValue);
    std::cout << numberValue << std::endl;
    std::cout << wordValue << std::endl;
}
