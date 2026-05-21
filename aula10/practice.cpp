//While
#include <iostream>

using namespace std;

int main(){

    int cont;

    cont = 0;
    while(cont ++< 20){
        cout << "Canal CFB: " << cont << "\n";
        if (cont == 10 ) {
            cout << "Chegamos no 10!"<< endl;
            break;
        }
    }

    cout << "\nRotina finalizada!"<< endl;

    return 0;
}

