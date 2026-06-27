// Struct Part.3 com Vetores
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
    
    Carro *carros = new Carro[3]; // Cria o array dinâmico de 3 espaços na memória Heap (Memória Dinâmica) (Os carros já nascem aqui!)
    Carro car1, car2, car3, car4, car5; // Linha desnecessária, criou várias simples na stack, do tipo Carro

    carros[0] = car1; carros[1] = car2; carros[2] = car3; // Linha desnecessária, colocou variáveis vazias dentro do array vazio

    carros[0].insere("Tornado", "Vermelho", 450, 350);
    carros[1].insere("Luxo", "Preto", 250, 260);
    carros[2].insere("Popular", "Branco", 100, 180);

    for (int i = 0; i < 3; i++) {
        carros[i].mostra();
    }

    delete[] carros; // apaga o array inteiro alocado na memória dinâmica para o vetor de carros(ponteiro), liberando memória

    return 0;
}