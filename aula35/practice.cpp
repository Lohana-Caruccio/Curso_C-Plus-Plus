// Map
#include <iostream>
#include <map>

using namespace std;

int main () {

    map <int, string> prod;
    map <int, string>::iterator itmap;
    
    /* Inserção manual
    prod[0] = "Mouse";
    prod[1] = "Teclado";
    prod[2] = "Monitor";
    prod[3] = "Caixa de som"; */

    // Inserção com insert
    prod.insert(pair<int, string>(0, "Mouse"));
    prod.insert(pair<int, string>(1, "Teclado"));
    prod.insert(pair<int, string>(2, "Monitor"));
    prod.insert(pair<int, string>(3, "Caixa de som"));


    for(auto it = prod.begin(); it != prod.end(); it++) {
        cout << it -> second << endl;
    }

    //prod.erase(2); // Remove o item com a chave 2, que é o monitor, não é a posição necessariamente, é o valor da CHAVE!

    // prod.clear(); // Limpa todo o map

    // Método find
    itmap = prod.find(3);
    if(itmap == prod.end()){ // end pois quer dizer que não encontrou o item, então o iterator aponta para o final do map
        cout << "Produto nao encontrado!" << endl;
    } else {
        cout << "Produto encontrado no estoque: " << itmap -> second << endl;
        cout << "Codigo: " << itmap -> first << " Produto: " << itmap -> second << "\n\n";
    }

    prod.erase(prod.begin(), prod.find(1)); // Remove do início até o item com a chave 1, que é o teclado. O find retorna um iterator para o item com a chave 1.

    // Range-based for loop
    for(auto it:prod){ // Cria uma cópia do map, então você pode alterar a cópia sem alterar o original.
        cout << it.first << ": "<< it.second << endl; // Lembrar de usar .(ponto)
    }

    //for(const auto& it: prod) - Cria um atalho protegido. Você lê direto da memória original, mas não pode alterar.
    return 0;
}