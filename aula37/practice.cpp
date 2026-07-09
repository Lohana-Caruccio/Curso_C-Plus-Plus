// Funções Lambda
/* Estrutura
[](){};
[captura de variáveis]
(parâmetros)-> tipo_retorno
{
corpo da função
};
*/

#include <iostream>
#include <vector>

using namespace std;

int main () {

    int x1, x2, x3, x4;
    x1 = 10;
    x2 = 5;
    x3 = 2;
    x4 = 12;


    auto soma = [=]()-> int{
        return x1 + x2 + x3 + x4;
    };
    
    auto maior = [=](vector<int> n)-> int{
        auto ma = 0;
        for(int i: n){
            ma = (ma > i) ? ma: i;
        }
        return ma + x1 + x2 + x3 + x4;
    };

    cout << maior({1, 2, 3, 4, 5 , 6}) << "\n";
    return 0;
}