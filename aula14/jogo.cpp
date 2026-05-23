//Jogo da velha
#include <iostream>

using namespace std;

int main(){

    char palavra [30], letra[1], secreta [30];
    int tam, i, chances, acertos;
    bool acerto;

    chances = 6;
    tam = 0;
    i = 0;
    acerto = false;
    acertos = 0;

    cout << "Fale para seu amigo(a) tapar os olhos e digite a palavra secreta: ";
    cin >> palavra;
    system("cls");

    //Calculando o tamanho da palavra
    while (palavra[i] != '\0'){
        i++;
        tam++;
    }
    //Inicializando a palavra secreta com traços
    for(i = 0; i < 30; i++){
        secreta[i] = '-';
    }
    
    //Loop do jogo
    while((chances > 0) &&(acertos < tam)){
        cout << "Chances: " << chances << endl;
        cout << "Palavra secreta: ";
        for(i=0; i < tam; i++){
            cout << secreta[i];
        }
        cout << "\nDigite uma letra: ";
        cin >> letra [0];
        for (i=0; i < tam; i++){
            if (palavra[i] == letra[0]){
                secreta[i] = letra[0];
                acerto = true;
                acertos++;
            }
        }
        if (acerto == false){
            chances --;
        }
        acerto= false;
        system("cls");
    }
    if(acertos == tam){
        cout << "Parabens, voce ganhou com " << acertos << " acertos!" << endl;
    }
    else{
        cout << "Voce perdeu! A palavra era: " << palavra << endl;
    }

    return 0;

}