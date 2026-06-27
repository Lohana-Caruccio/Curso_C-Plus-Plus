// Modo Turbo de Entrada/Saída 

#include <iostream>

using namespace std;

int main () {
    ios_base::sync_with_stdio(false); // desativa a sincronização entre C e C++
    cin.tie(NULL); // desamarra o cin do cout, deixa de atualizar a tela a cada comando de entrada.

    //Exemplo de uso
    int x, y;
    cin >> x;
    cin >> y;

    int soma = x + y;

    cout << soma << "\n";


    // DETALHE: Usando essas linhas não pode usar "endl;" deve-se usar "\n"
    return 0;
}