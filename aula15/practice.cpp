// Funções
#include <iostream>

using namespace std;

void texto();
void soma (int a, int b);
int soma2(int a, int b);
void transporte (string tra[4]);


int main () {
    int res;
    string transp[4] = {"Carro", "Moto", "Aviao", "Navio"};

    soma(10,20);
    res = soma2(40,60);
    cout << "Resultado da soma de 40 + 60 e igual a " << res << endl;

    transporte(transp);

    return 0;
}

void texto () {
    cout << "Canal Fessor Bruno" << endl;
}

void soma (int a, int b) {
    cout << "A soma de " << a << " + " << b << " e igual a " << a + b << endl;
}

int soma2(int a, int b) {
    return a + b;
}

void transporte (string tra[4]) {
    for (int i=0; i<4; i++) {
        cout  << i+1 << " - " << tra[i] << endl;
    }
}