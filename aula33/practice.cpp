// Vector
#include <iostream>
#include <vector>

using namespace std;

int main () {

    vector <int> num1; //Declarando um vetor de inteiros chamado num1
    vector <int> num2; 
    int tam1, tam2, i;

    num1.push_back(1); num1.push_back(2); num1.push_back(3); num1.push_back(4); num1.push_back(5);
    // num1 [3] = 3; - Pode- se alterar o valor do elemento na posição 3 (índice 3) para 3, pois ela já existe no vetor.

    num2.push_back(6); num2.push_back(7); num2.push_back(8); num2.push_back(9); num2.push_back(10);

    num1.insert(num1.end() - 1, 888); // Insere 888 na penúltima posição
    num1.erase(num1.end() - 2); // Remove o penúltimo elemento

    // num1.swap(num2); - Troca os elementos dos vetores num1 e num2
    tam1 = num1.size();
    tam2 = num2.size();

    cout << "Primeiro valor de num1:  " << num1.front() << endl; // front() - Retorna o primeiro elemento do vetor
    cout << "Ultimo valor de num1:  " << num1.back() << endl; // back() - Retorna o último elemento do vetor
    cout << "Valor do meio de num1: " << num1.at(tam1/2) << endl;

    
    
    cout << "\nTamanho do vetor num1: " << tam1 << endl;
    
    for(i=0; i < tam1; i++) {
        cout << "Elemento " << i + 1 << ": " << num1[i] << endl;
    }

    cout << "Tamanho do vetor num2: " << tam2 << endl;

    for (i=0; i < tam2; i++) {
        cout << "Elemento " << i + 1 << ": " << num2[i] << endl;
    }

    while (!num1.empty()) {
        num1.pop_back(); // Remove o último elemento do vetor num1
    }

    num2.clear(); // Remove todos os elementos do vetor num2

    cout << "\nTamanho do vetor num1: " << num1.size() << endl;

    return 0;
}

