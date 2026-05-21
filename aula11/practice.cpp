//Do while
#include <iostream>

using namespace std;

int main(){
    
    int cont;
    
    cont = 20;
    do{
        cout << "CFB: "<< cont << endl; // Imprime o bloco de comando pelo menos uma vez
        cont++;
    }while(cont<20);
    
    cout << "Fim do programa!" << endl;

    return 0;
}
