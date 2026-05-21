//Switch case
#include <iostream>

using namespace std;

int main(){
    int n;
    cout << "Digite uma opção [1] ou [2]: ";
    cin >> n;

    switch(n){
        case 1:
        cout << "Voce digitou 1!" << endl;
        break;
        case 2:
        cout << "Voce digitou 2!" << endl;
        break;
    }

    return 0;
}