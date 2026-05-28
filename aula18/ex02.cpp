// Fibonacci usando recursão
/*#include <iostream>

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
    
}*/

// Versão Dinâmica

#include <iostream>
#include <vector>

using namespace std;

vector <int> memoria;
int fibonacci(int num);

int main (){
    int termos;
    termos = 10;
    memoria.resize(termos, -1); // Pega o vetor e redimensiona ele para o numero de termos, preenchendo com -1, para não deixar vazio

    for (int i = 0; i < termos; i++){
        cout << fibonacci(i);

        if (i < termos - 1){
            cout << " , ";
        }else{
            cout << "." << endl;
        }
    }

    return 0;
}

int fibonacci(int num){
    if (num == 0){
        return 0;
    }
    if (num == 1){
        return 1;
    }
    memoria[num] = fibonacci(num - 1) + fibonacci(num - 2);
    return memoria[num];
}


