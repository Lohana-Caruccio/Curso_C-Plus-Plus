// Ponteiros pt.1
#include <iostream>

using namespace std;


int main () {

    string veiculo = "Carro";
    string *ptr_veiculo;

    ptr_veiculo = &veiculo; // ponteiro recebe o endereço da variável veiculo

    cout << *ptr_veiculo << endl; // imprime o valor da variável veiculo

    *ptr_veiculo = "Moto"; // altera o valor da variável veiculo através do ponteiro

    cout << *ptr_veiculo << endl; // imprime o novo valor da variável veiculo

    return 0;
}