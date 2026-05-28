# include <iostream>

using namespace std;

void imp(string txt = "Desconhecido");

int main() {

    imp("Lohana");

    return 0;
}


void imp(string txt) {
    cout << endl << txt << endl;
}