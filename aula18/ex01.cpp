// Fatorial
#include <iostream>

using namespace std;

int fatorial(int num);

int main () {
    
    int valor = 5;

    cout << "Fatorial de: " << valor << endl;
    
    for (int i = valor; i > 0; i--){
        cout << i;

        if (i > 1){
            cout << " * ";
        } else {
            cout << " = ";
        }
    }

    int res = fatorial(valor);

    cout << res << endl;

    return 0;

}

int fatorial(int num) {
    if (num <= 1){
        return 1;
    } else {
        return num * fatorial(num - 1);
    }
}
