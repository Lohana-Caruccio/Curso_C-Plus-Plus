// Fibonacci sequence using recursion
#include <iostream>

using namespace std;

int fibonacci(int num);   

int main () {

    int termos;
    termos = 10;

    for (int i = 0; i < termos; i++){
        cout << fibonacci(i) << " ";
    }
    cout << endl;
    return 0;

}
    
int fibonacci(int num){
    if (num == 0){
      return 0;
    }
    if (num == 1){
       return 1;
    }

    return fibonacci(num - 1) + fibonacci(num - 2);
    
}

// Versão Dinâmica
