// Pilhas
#include <iostream>
#include <stack>

using namespace std;

int main () {

    stack <string> cartas;

    if (cartas.empty()) {
        cout << "Pilha vazia!" << endl;
    } else {
        cout << "Pilha com cartas!" << endl;
    }

    // Adicionando na pilha
    cartas.push("Rei de Copas");
    cartas.push("Rei de Espadas");
    cartas.push("Rei de Ouros");
    cartas.push("Rei de Paus");

    if (cartas.size() == 0) {
        cout << "Pilha vazia!" << endl;
    } else {
        cout << "Pilha com cartas!" << endl;
    }
    
    while (!cartas.empty()) { // O "!" é o operador de negação, ou seja, enquanto a pilha não estiver vazia, continue retirando cartas
        cartas.pop();
    }


    cout << "\nTamanho da pilha: " << cartas.size() << endl;
    

    return 0;
}

/* Métodos da classe stack 
- push()
- pop ()
- top()
- size()
- empty()
*/