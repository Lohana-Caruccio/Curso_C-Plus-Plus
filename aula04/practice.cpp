//Variáveis globais e locais, operadores matemáticos
#include <iostream>
using namespace std;

int n1, n2; //Variáveis Globais

int main(){
    //Operadores matemáticos: + - / * % ()

    int n3, n4; //Variavéis locais
    int res1, res2;

    n1 = 11;
    n2 = 3;
    n3 = 5;
    n4 = 2;

    res1 = n1/n2; //Divisão inteira
    res2 = n1%n2; //Resto da divisão inteira
    cout << "Divisao inteira: " << res1 << endl;
    cout << "Resto da divisao: " << res2 << endl;

    return 0;
} //Bloco de função