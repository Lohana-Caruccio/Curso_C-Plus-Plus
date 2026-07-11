/* Quando usar construtores em Structs?
 Quando queremos inicializar os membros da struct com valores específicos no momento da criação do objeto. Isso é útil para garantir que a struct esteja em um estado válido desde o início. E facilita a inserção na main
 ex usado no ex 2396 beecrowd:

struct Aluno {
    string nome;
    char regiao;
    int dist;
    
    Aluno(string n, char r, int d){ ---Construtor
        nome = n;
        regiao = r;
        dist = d;
    
    }

}; -- Lembrar de usar o ; ao fechar a struct

*/

/* Quando um problema vir com EOF(End of File) já sabe-se que o problema vai ter um número indefinido de entradas, então é necessário usar while(cin >> variavel) para ler até o final do arquivo. 
Quando for um problema que por exemplo em um vector ou uma list não deva-se acumular os valores, então é necessário usar o método clear() para limpar a lista ou o vector antes de ler os valores novamente.
ex: 
while(cin >> V){
    vector.clear();
}
*/

/* Operadores Ternários
Forma compacta de usar if e else, mas não é recomendado usar em casos de if e else complexos, pois pode deixar o código confuso.
Estrutura:
condição ? valor_se_verdadeiro : valor_se_falso
ex usado no ex 1021 do beecrowd:

if(moedas[i] == 100){
            cout << qtd_moedas << " moeda(s) de R$ 1.00" << "\n";
        } else {
            cout << qtd_moedas << " moeda(s) de R$ 0." << (moedas[i]< 10? "0" : "") << moedas [i] << "\n";
        }
        
*/