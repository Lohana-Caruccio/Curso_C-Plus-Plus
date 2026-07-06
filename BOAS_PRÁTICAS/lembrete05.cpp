// BIBLIOTECA < algorithm >
/* Comandos úteis
max(a, b) / min(a, b): Retorna o maior ou menor valor entre dois elementos.

reverse(inicio, fim): Inverte a ordem de um vetor/array.

binary_search(inicio, fim, valor): Faz uma busca binária ultra rápida (retorna true ou false).

next_permutation(inicio, fim): Gera a próxima combinação/permutação dos elementos.


*/

/* Sort
Sort serve para ordenar números mas também strings ou char em ordem alfabética
ex:
vector<int> numeros = {5, 2, 9, 1};
sort(numeros.begin(), numeros.end()); 
Resultado: {1, 2, 5, 9}


Para inverter a ordem:
sort(numeros.begin(), numeros.end(), greater<int>());
Resultado: {9, 5, 2, 1}


Pode- se passar uma ordenação customizada com funções que deve ser sempre do tipo BOOL
ex:
sort(alunos.begin(), alunos.end(), compararAlunos); --compararAlunos é uma função que retorna true ou false, dependendo da comparação entre dois elementos. usada em um exercício.

*/