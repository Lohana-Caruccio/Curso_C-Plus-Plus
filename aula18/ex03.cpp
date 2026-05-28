// Como achar um valor especifico em uma sequencia de Fibonacci

#include <iostream>
#include <vector>

using namespace std;

vector<long long> memoria;

long long fibonacci2(int num){
    if (num == 0){
      return 0;
    }
    if (num == 1){
       return 1;
    }

    if (memoria[num] != -1){
        return memoria[num];
    }

    memoria[num] = fibonacci2(num - 1) + fibonacci2(num - 2);
    
    return memoria[num];
}

int main (){

    int n = 4;
    memoria.resize(n + 1, -1); // Redimensiona o vetor para n + 1(Para acessar exatamente a posição 50 precisariamos que o vetor tivesse 51 posições), preenchendo com -1 para indicar que os valores ainda não foram calculados

    cout << "O termo " << n << " da sequencia de Fibonacci e: " << fibonacci2(n) << endl;

    return 0;
}

