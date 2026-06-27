// USO DO GETLINE

#include <iostream>
using namespace std;

// Exemplo de exercício do beecrowd
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    string L;
    getline(cin, L); // Usa-se o getline quando formos ler um texto inteiro e não somente a primeira palavra
    
    if (L.size() <= 80){
        cout << "YES" << "\n";
    } else{
        cout << "NO" << "\n";
    }
 
    return 0;
}