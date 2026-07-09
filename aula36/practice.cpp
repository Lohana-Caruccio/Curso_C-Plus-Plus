// PAIR
#include <iostream>
#include <utility>
#include <vector>

using namespace std;

int main () {

    // Exemplo 1
    const int tam = 2; 
    pair <int, string> par[tam];


    // Primeira maneira
    par[0].first = 100;
    par[0].second = "C++";

    // Segunda maneira
    par[1]= make_pair(200, "Python");


    cout << par[0].first << " " << par[0].second << endl;
    cout << par[1].first << " " << par[1].second << endl;



    // Exemplo 2
    const int tam2 = 2;
    pair < int, pair <string, double>> produto[tam2]; // Pair com pair

    produto[0] = make_pair(1, make_pair("Notebook", 2500.00));
    produto[1] = make_pair(2, make_pair("Smartphone", 1500.00));

    for(int i = 0; i < tam2; i++){
        cout << produto[i].first << " "<< produto[i].second.first << " " << produto[i].second.second << "\n";
    }

    // Exemplo 3
    
    vector <pair <int, string>> novos_produtos;

    novos_produtos.push_back(make_pair(1, "Caderno"));
    novos_produtos.push_back(make_pair(2, "Caneta"));

    //for(int i = 0; i < novos_produtos.size(); i++){
    for(auto i: novos_produtos){ // For com base em intervalo
        //cout << novos_produtos[i].first << " " << novos_produtos[i].second << "\n";
        cout << i.first << " " << i.second << "\n";
    } 

    return 0;
}