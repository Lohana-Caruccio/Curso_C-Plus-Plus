// LONG LONG
/*
Serve tanto para variáveis simples quanto para vetores (vector<long long>). 

Truque do 1LL: Forçar o C++ a fazer uma conta em 64 bits (long long) quando as variáveis envolvidas são int comuns. 
Coloque 1LL * no início de multiplicações perigosas para evitar o overflow (estouro de memória) por efeito dominó.
ex:
    int a = 100000, b = 100000;
    long long area = 1LL * a * b; // SEGURO. O 1LL converte a conta antes de estourar.

(se as variáveis já forem inicializadas como long long, não precisa do 1LL)

O Sufixo LL em Literais: Avisa ao compilador que um número digitado direto no código deve nascer como long long.
ex:
     long long n = 8000000000LL; (Sem o LL, o compilador tenta ler como int, gerando lixo).

(Não use LL ao ler dados do teclado (cin >> n) ou ao atribuir valores pequenos (int cont = 0;).

Cuidados com Funções Prontas (<numeric>):
accumulate: O terceiro argumento comanda o tipo do retorno. Para somas gigantes, use 0LL.
ex:
    long long soma = accumulate(v.begin(), v.end(), 0LL);

lcm (MMC): Como ele multiplica os números antes de dividir, use sempre variáveis long long como entrada para não estourar a conta interna.
ex:
    long long res = lcm(a, b); // a e b devem ser long long!
*/