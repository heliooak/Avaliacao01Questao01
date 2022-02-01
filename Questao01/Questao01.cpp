// Questao01.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Retangulo.h"

using namespace std;

int main()
{
    Retangulo r;

    // lendo os valores iniciais
    int aux;
    cout << "Informe x: " << endl;
    cin >> aux;
    r.setX(aux);
    cout << "Informe y: " << endl;
    cin >> aux;
    r.setY(aux);
    cout << "Informe a altura: " << endl;
    cin >> aux;
    r.setAltura(aux);
    cout << "Informe a largura: " << endl;
    cin >> aux;
    r.setLargura(aux);

    r.imprimirDados();

    // realizando a translacao
    int dx, dy;
    cout << "Informe a distancia em x: " << endl;
    cin >> dx;
    cout << "Informe a distancia em y: " << endl;
    cin >> dy;
    r.transladar(dx, dy);

    cout << "-- Dados finais do retangulo apos a translacao -- " << endl;
    r.imprimirDados();
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
