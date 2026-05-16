
#include <iostream>  
#include <cstdlib> //Para usar o system("cls") e system("pause")

using namespace std;

int main(){

    int n1, n2, res;
    char opc;

    inicio:

    system("cls"); //Limpa a tela

    cout << "Digite o valor da nota 1: ";
    cin >> n1;
    cout << "Digite o valor da nota 2: ";
    cin >> n2;

    res = (n1 + n2);

    /*
     >=60 - Aprovado
     >= 40 < 60 - Recuperação
     < 40 - Reprovado
    */

    if(res >= 60){
        cout << "\nAprovado!";

    }else if(res >= 40){
        cout << "\nRecuperacao!";
    }else{
        cout << "\nReprovado!";
    }

    cout << "\nDeseja calcular outras notas? [s/n]: "; 
    cin >> opc;

    if(opc == 's' or opc == 'S'){
        goto inicio;
    } else {
        cout << "\nPrograma finalizado!";
    }

    return 0;
}