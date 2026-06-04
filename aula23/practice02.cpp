// Outras maneiras de imprimir as listas sem excluír os dados da memória
#include <iostream>
#include <list>

using namespace std;

int main () {
    // Primeira maneira
    list < int > lista;
    int tam;

    tam = 10;

    for (int i = 0; i < tam; i++){
        lista.push_front(i);
    }

    cout << "Primeira lista: " << endl;
    for (int elemento : lista){
        cout << elemento << ' ';
    }
    
    // Segunda maneira usando iterators
    list < int > lista2;
    list < int > :: iterator it;

    int tam2;

      for (int i = 0; i < tam; i++){
        lista2.push_back(i);
    }

    cout << "\nSegunda lista: " << endl;
    for (it = lista2.begin(); it != lista2.end(); it++){
        cout << *it << ' ';
    }


    return 0;
}
