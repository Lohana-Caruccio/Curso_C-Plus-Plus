// Lista Part.1
#include <iostream>
#include <list>

using namespace std;

int main () {

    list < int > aula;
    int tam;
    list < int > :: iterator it;

    tam = 10;
    for (int i = 0; i < tam; i++){
        aula.push_front(i);
    }

    /* Usando o iterator para inserir um elemento na posição 7 da lista
    it = aula.begin();
    advance(it,7);
    aula.insert(it, 0); */


    cout << "Tamanho da lista: " << aula.size() << endl;

    aula.sort(); // Ordena a lista
    aula.reverse(); // Inverte a ordem da lista

    tam = aula.size();
    for (int i = 0; i < tam; i++){ // Imprime o primeiro elemento da lista e depois o remove, repetindo o processo até a lista ficar vazia (excluí os dados da memória)
       cout << aula.front() << ' ';
       aula.pop_front();
    }

    return 0;
}