//Struct Part.2
#include <iostream>

using namespace std;
struct Carro {
    string nome;
    string cor;
    int pot;
    int velMax;
    int vel;

    void insere(string no, string co, int po, int velM) {
        nome = no;
        cor = co;
        pot = po;
        velMax = velM;
        vel = 0;
    }

    void mostra() {
        cout << "\nCarro" << endl;
        cout << "\nNome...............: " << nome << endl;
        cout << "Cor................: " << cor << endl;
        cout << "Potencia...........: " << pot << endl;
        cout << "Velocidade Atual...: " << vel << endl;
        cout << "Velocidade Maxima..: " << velMax << endl;
    }

    void muda_vel(int mv) {
        vel = mv;
        if (vel > velMax) {
            vel = velMax;
        }
        if (vel < 0) {
            vel = 0;
        }
    }

};

int main () {

    Carro car1, car2, car3, car4;

    car1.insere("Tornado", "Vermelho", 450, 350);
    
    car1.mostra();

    car1.muda_vel(150);
    car1.mostra();


    return 0;
}