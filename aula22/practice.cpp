// Filas Queues
#include <iostream>
#include <queue>

using namespace std;

int main () {

    /* Métodos da classe queue
- push()
- pop ()
- size()
- empty()
- back ()
- front()
*/
    queue < string > cartas;

    cartas.push("Rei de Copas");
    cartas.push("Rei de Espadas");
    cartas.push("Rei de Ouros");
    cartas.push("Rei de Paus");

    cout << "Tamanho da fila: " << cartas.size() << endl;
    cout << "Primeira carta da fila: " << cartas.front() << endl; 
    cout << "Ultima carta da fila: " << cartas.back() << endl;

    while (!cartas.empty()) {
        cout << "\nPrimeira carta: " << cartas.front() << endl;
        cartas.pop();
    }

    return 0;
}