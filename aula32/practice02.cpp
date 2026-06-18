#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

int main () {

    int num = 10;
    float Pi = M_PI;
    int num2 = 30;
    
    cout << "Valor de NUM em decimal: " << num << endl;
    //cout << "Valor de NUM em hexadecimal: " << hex << num << endl;

    cout << fixed << setprecision(2);
    cout << "Valor de Pi: " << Pi << endl;

    cout << "Valor de Pi: " << std::scientific << Pi << endl;

    cout << "Valor de NUM2: " <<  setw(12) << setfill('_') << num2 << endl;

    return 0;
}

// hex
// oct
// dec