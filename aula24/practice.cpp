#include <iostream>
#include <list>

using namespace std;

int main () {
    list < int > aula, teste;
    int tam;
    list < int > :: iterator it;

    teste.push_front(9);
    teste.push_front(9);
    teste.push_front(9);
    teste.push_front(9);


    tam = 10;
    for (int i = 0; i < tam; i++){
        aula.push_front(i);
    }

    it = aula.begin();
    advance(it, 3);
    aula.insert(it, 0);

    aula.erase(--it); // Remove o elemento na posição 3 da lista (o número 0 que foi inserido anteriormente). Precisa do decremento do iterator para apontar para o elemento a ser removido, já que o insert() move o iterator para a posição seguinte.

    //aula.clear(); Limpa a lista, removendo todos os elementos. A memória alocada para os elementos é liberada.

    aula.merge(teste); // Mescla a lista "teste" com a lista "aula". A lista "teste" deve estar ordenada para que a mesclagem funcione corretamente. Após a mesclagem, a lista "teste" ficará vazia.

    cout << "Tamanho da lista: " << aula.size() << endl;


    tam = aula.size();
    for (int i = 0; i < tam; i++){ 
       cout << aula.front() << ' ';
       aula.pop_front();
    }

    cout << "\nTamanho da lista: " << aula.size() << endl;

    return 0;
}