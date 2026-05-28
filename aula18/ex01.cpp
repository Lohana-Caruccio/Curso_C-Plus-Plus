// Fatorial
#include <iostream>

using namespace std;

int fatorial(int num);

int main () {
    
    int res;
    res = fatorial(5);
    
    cout << " = " << res << endl;

    return 0;

}

int fatorial(int num) {
    if (num <= 1){
        cout << num;
        return 1;
    } else {
        cout << num << " * ";
        return num * fatorial(num - 1);
    }
}
