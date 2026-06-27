// Ponteiros pt.3
#include <iostream>

using namespace std;

void somar(float *var, float valor);
void pt_array(float *v);

int main () {
    float num = 0;
    float vetor[5];

    somar(&num, 10);
    pt_array(vetor); // quando for vetor não precisamos passar o endereço

    cout << num << endl;
    for (int i = 0; i < 5; i++) {
        cout << vetor[i] << endl;
    }

    return 0;
}

void somar(float *var, float valor) {
    *var += valor;
}


void pt_array(float *v) {
    v[0] = 0;
    v[1] = 0;
    v[2] = 0;
    v[3] = 0;
    v[4] = 0;
}