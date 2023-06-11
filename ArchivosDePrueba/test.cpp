#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <iomanip>

using namespace std;

void MostrarCandidatos(string candidato);

void ActualizarVotos(int candidato){
    candidato--;
    fstream VOTOS;
    VOTOS.open("votos.txt", ios::in);

    vector<string> lineas;
    string linea;

    if (VOTOS.is_open()){
        while(getline(VOTOS, linea)){
            lineas.push_back(linea);
        }
        VOTOS.close();
    }

    int cambio = stoi(lineas[candidato]);
    cambio++;

    VOTOS.open("votos.txt", ios::out);

    if (VOTOS.is_open()){
        for (int i = 0; i < lineas.size(); i++){
            if (i != candidato){
                VOTOS << lineas[i] << endl;
            }else{
                VOTOS << to_string(cambio) << endl;
            }
        }
        VOTOS.close();
    }
}

int main (){
    //int candidato = 0;
    //cout << "ingrese numero de candidato: ";
    //cin >> candidato;

    //ActualizarVotos(candidato);
    string candidatos;
    cout << "ingrese el departamento de los candidatos a mostrar <dos digitos del 01 al 14>: ";
    cin >> candidatos;
    MostrarCandidatos(candidatos);
    return 0;
}

void MostrarCandidatos(string candidatos){
    fstream Candidatos;
    fstream VOTOS;
    VOTOS.open("votos.txt", ios::in);
    Candidatos.open("candidatos.txt", ios::in);
    vector<string> lineasCandidatos;
    vector<string> lineasVotos;
    string lineaCandidatos, lineaVotos;
    if (Candidatos.is_open() && VOTOS.is_open()){
        while(getline(Candidatos, lineaCandidatos)){
            lineasCandidatos.push_back(lineaCandidatos);
        }

        while(getline(VOTOS, lineaVotos)){
            lineasVotos.push_back(lineaVotos);
        }

        Candidatos.close();
        VOTOS.close();
    }

    system("clear");

    cout << setfill('-')
         << "|"
         << setw(36) << "Candidato"
         << "|"
         << setw(10) << left << "Votos"
         << "|"
         << endl;
    
    string tmp;
    for (int i = 0; i < lineasCandidatos.size(); i++){
        tmp = lineasCandidatos[i];
        if((tmp[0] == candidatos[0] && tmp[1] == candidatos[1])){
            cout << setfill('-')
             << "|"
             << setw(30) << lineasCandidatos[i]
             << setw(10) << left << lineasVotos[i]
             << "|"
             << endl;
        }
    }
}