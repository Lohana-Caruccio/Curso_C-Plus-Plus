// Ponteiros pt.2
#include <iostream>

using namespace std;

int main () {
    int *p;
    int vetor[10]; // vetor(ARRAY) != Vector

    p = vetor; // o nome do vetor é o endereço do primeiro elemento, mesma coisa que p = &vetor[0];
    *p = 10; // vetor[0] = 10;
    cout << "\n" << vetor[0] << endl; // imprime o endereço do segundo elemento do vetor

    *(p+=1);
    *p = 20;
    cout << "\n" << vetor[1] << endl; 

    *(p+=1);
    *p = 30;
    cout << "\n" << vetor[2] << endl;

    return 0;
}