// Printf e Scanf
#include <iostream>
#include <stdio.h>

using namespace std;

int main () {
    int n1 = 1;
    int n2 = 2;
    int n3;
    char nome[10];


    printf("Digite um valor inteiro e um nome: ");
    scanf("%d %s", &n3, &nome);
    printf("Valor digitado: %d\n", n3);

    printf("Nome: %s\n",nome);



    return 0;
}

/*
d,i => int
x, X => Hexadecimal 
u => int sem sinal
s => string, char*
f => double
p => ponteiros
*/