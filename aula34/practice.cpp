// Iterator

#include <iostream>
#include <vector>
#include <iterator>

using namespace std;

int main () {

    vector <string> produtos = {"mouse", "teclado", "monitor", "gabinete", "caixa de som"};
    vector<string>::iterator it;
    

    for(it= produtos.begin(); it!= produtos.end(); it++){
        cout << *it << "\n";
    }

    it = produtos.begin();

    //advance
    advance(it,2); // Avança 2 a partir do primeiro apontado pelo begin, e muda a casa do iterator
    cout << *it << "\n";

    //next
    cout << *next(it,1) << endl; // apenas mostra o next mas não muda a casa do iterator

    //prev
    cout << *prev(it,2) << endl; //volta as casas mas não muda a casa do iterator
    
    
    return 0;
}