//Como utilizar variáveis
#include <iostream>

using namespace std;

int main(){

    // TIPO NOME;
    // TIPO NOME = VALOR;
    
    int vidas = 0; 
    char letra = 'L'; //Character(Recebe somente caracteres)
    double decimal = 5.2; //Float com precisão maior
    float decimal2 = 5.2f; //Float com precisão mais baixa, tende a arrendondar
    bool vivo = true; // True(1) or False(0) (lógico)
    string nome = "Lohana"; //Recebe textos("Lohana")
    
    cout << "Digite o numero de vidas: ";
    cin >> vidas;
    cout << "Digite uma letra: ";
    cin >> letra;
    cout << "Dinheiro: ";
    cin >> decimal;
    cout << "Digite seu nome: ";
    cin >> nome;
 
    cout << "\nVidas: " << vidas << "\nLetra: " << letra << "\nDinheiro: " << decimal << "\nNome: " << nome << "\n";
    
    return 0;
}

// pode-se usar para comentário grande -> /* "Comentário" */