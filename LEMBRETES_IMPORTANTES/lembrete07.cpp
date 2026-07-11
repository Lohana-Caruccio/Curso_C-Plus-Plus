// Biblioteca <numeric>

/*Funções úteis:

lcm: Mínimo Múltiplo Comum
    lcm(a,b);

gcd: Máximo divisor comum
    gcd(a, b);

accumulate: Somador universal
    Pode-se usar para substituir um for para somar os elementos de um vector.
    Estrutura:
    accumulate(v.begin(), v.end(), 0);
    Lembrete:
    Para somar int pequenos: use 0

    Para somar int gigantes: use 0LL

    Para somar double / float: use 0.0

partial_sum: Soma Acumulada/Prefix Sum
    Cria um novo array onde cada posição i contém a soma de todos os elementos do início até i.
    ex:
    vector<int> v = {1, 2, 3, 4};
    vector<int> pref(4); -- esse (4) é o valor que o vector pref vai ter
    partial_sum(v.begin(), v.end(), pref.begin());
    // pref agora é: {1, 3, 6, 10}

iota: Preenchimento Sequencial
    Preenche um intervalo com valores sequenciais crescentes.
    ex:
    vector<int> pais(n);
    iota(pais.begin(), pais.end(), 0); // Preenche com 0, 1, 2, 3... n-1

adjacent_difference: Diferença entre Vizinhos
    Calcula a diferença entre elementos vizinhos. É o inverso exato do partial_sum.
    Estrutura:
    adjacent_difference(origem.begin(), origem.end(), destino.begin());
    ex:
    vector<int> temp = {10, 12, 15, 11}; // Temperaturas lidas
    vector<int> variacao(4);  // Vetor para guardar o resultado

    adjacent_difference(temp.begin(), temp.end(), variacao.begin());

    // O vetor 'variacao' agora contém: {10, 2, 3, -4}

inner_product:
    Multiplica os elementos correspondentes de dois vetores e soma o resultado.
    Estrutura:
    inner_product(v1.begin(), v1.end(), v2.begin(), valor_inicial);
    ex:
    vector<int> qtd = {2, 1, 3};      // Comprei: 2 chocolates, 1 refrigerante, 3 salgadinhos
    vector<int> preco = {5, 8, 4};    // Preços: Chocolate R$5, Refri R$8, Salgadinho R$4

    // O 0 indica que a soma total vai começar em 0
    int total_gasto = inner_product(qtd.begin(), qtd.end(), preco.begin(), 0);

    // O resultado será: 30
*/  