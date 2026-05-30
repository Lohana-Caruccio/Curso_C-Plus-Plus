// Pilhas
#include <iostream>
#include <stack>

using namespace std;

int main () {

    stack <string> cartas;

    // Adicionando na pilha
    cartas.push("Rei de Copas");
    cartas.push("Rei de Espadas");
    cartas.push("Rei de Ouros");
    cartas.push("Rei de Paus");

    cout << "\nTamanho da pilha: " << cartas.size() << endl;
    cout << "Carta no topo da pilha: " << cartas.top() << endl; // Mostra o elemento no topo da pilha, sem removê-lo
    
    // Retirando da pilha
    cartas.pop();
    cout << "\nTamanho da pilha apos remocao: " << cartas.size() << endl;
    cout << "Carta no topo da pilha apos remocao: " << cartas.top() << endl;

    return 0;
}