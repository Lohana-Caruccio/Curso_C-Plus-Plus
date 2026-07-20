#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

string somar_strings(string num1, string num2) {
    string resultado = "";
    int i = num1.length() - 1;
    int j = num2.length() - 1;
    int vai_um = 0;

    while (i >= 0 || j >= 0 || vai_um) {
        int soma = vai_um;
        if (i >= 0) {
            soma += num1[i] - '0';
            i--;
        }
        if (j >= 0) {
            soma += num2[j] - '0';
            j--;
        }
        vai_um = soma / 10;
        resultado += (soma % 10) + '0';
    }
    reverse(resultado.begin(), resultado.end());
    return resultado;
}

bool menor_ou_igual(string num1, string num2) {
    if (num1.length() != num2.length()) {
        return num1.length() < num2.length();
    }
    return num1 <= num2;
}

int main() {
    
    vector<string> fib;
    fib.push_back("1"); 
    fib.push_back("2"); 

    
    string limite(101, '0');
    limite[0] = '1'; 

    while (true) {
        string proximo = somar_strings(fib[fib.size() - 1], fib[fib.size() - 2]);
        if (!menor_ou_igual(proximo, limite)) {
            break; 
        }
        fib.push_back(proximo);
    }

  
    string a, b;
    while (cin >> a >> b) {
        if (a == "0" && b == "0") {
            break;
        }

        
        int contador = 0;
        for (size_t i = 0; i < fib.size(); i++) {
           
            if (menor_ou_igual(a, fib[i]) && menor_ou_igual(fib[i], b)) {
                contador++;
            }
        }

      
        cout << contador << endl;
    }

    return 0;
}