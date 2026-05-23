//Arrays(Unidimensionais)ou Vetores
#include <iostream>

using namespace std;

int main(){
    
    /* Para tamanho de vetores podemos usar a função sizeof, que retorna o tamanho do vetor em bytes. Sabendo que cada int tem 4 bytes, podemos dividir o resultado por 4 para obter o número de elementos do vetor.
    Usamos na condição, exemplo:
     for (i=0;  i<sizeof(vetor)/4; i++){}
    */
    
    /*Uma das maneira de declarar e inicializar um vetor:
    vetor[0] = 10;
    vetor[1] = 20;
    vetor[2] = 30;
    vetor[3] = 40;
    vetor[4] = 50;
    */

    int tam = 5;
    int vetor[tam] = {10, 20, 30, 40, 50}; //5 posições começando no 0, ou seja, do 0 ao 4
    int i;


    for (i=0;  i<tam; i++){
        cout << "Vetor na posicao " << i << ": " << vetor[i] << endl;
    }

    return 0;
}
