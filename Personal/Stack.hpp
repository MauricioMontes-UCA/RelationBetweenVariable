#include <iostream>

struct Node{
    int number;
    std::string word;

    struct Node *next;
};

struct Node *stack = nullptr;

void Push(int n, std::string word){
    //Se crea un puntero de tipo Node, y se le asigna un espacio de memoria (la dirección)
    struct Node *temp = new Node();

    //Se asigna a cada miembro de la estructura un valor a almacenar
    temp->number = n;
    temp->word = word;

    //A *next se le asigna la dirección a la que apunta stack
    temp->next = stack;

    //A *stack se le asigna la dirección de memoria del espacio reservado por *temp, *temp deja de ser relevante
    stack = temp;

    //Porqué deja de funcionar cuando se hace uso de "delete temp;"?
}

void Pop(){
    //Se crea un puntero temporal que contiene la dirección de memoria de *stack
    struct Node *temp = stack;

    //A *stack se le asigna la dirección de memoria contenida en *next
    stack = temp->next;

    //Se borra el espacio de memoria asignado, que se ha guardado en *temp
    delete temp;
}

void Print(){
    //Se le asigna a un puntero temporal la información de *stack, para no alterar la pila y solo imprimir todos los datos de la pila
    struct Node *temp = stack;

    while (temp != nullptr){
        std::cout << "Stored number: " << temp->number << std::endl;
        std::cout << "Stored word: " << temp->word << std::endl;
        std::cout << "Node's memory address: " << temp << std::endl;
        std::cout << "Next node's memory address: " << temp->next << std::endl;
        std::cout << std::endl;

        temp = temp->next;
    }

    delete temp;
}

bool IsEmpty(){
    //Si *stack no apunta a nada, significa que está vacío
    return stack == nullptr;
}

void LastElement(int &numberNode, std::string &wordNode){
    //Si el stack está vacío, no es posible retornar nada 
    if (IsEmpty()){
        return;
    }
    //Por otro lado, si stack apunta a un elemento (el último elemento del stack), entonces "retorna" los valores almacenados
    //haciendo uso del paso de valor por referencia.
    else{
        numberNode = stack->number;
        wordNode = stack->word;
    }
}