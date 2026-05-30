// Enum
#include <iostream>

using namespace std;

int main (){

    enum armas {fuzil = 100, revolver = 8, rifle = 12, metralhadora = 150};
    armas armaSel;

    armaSel = rifle;

    cout << "Arma selecionada: " << armaSel << endl;
    

    return 0;
}