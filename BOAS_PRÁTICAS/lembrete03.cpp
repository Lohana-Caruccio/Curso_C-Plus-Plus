// Lembretes sobre como usar iterators

/*Containers de valor único
ex: std::vector, std::list, std::set
O iterador aponta para um dado direto.

Como acessar: Use o asterisco: *it.
*/

/*Containers de par chave/valor
ex: std::map, std::unordered_map
O iterador aponta para um par (pair).

Como acessar: Use a seta para escolher o que quer: it->first ou it->second.
*/

/* Ao usarmos o Range-based for loop
ex: for(auto it: container)
o it não é um iterator, mas sim uma cópia do elemento 
Nesse caso, para acessar: usa-se "it.first ou it.second"
Para melhor desempenho: 
for(const auto& it: prod) - Cria um atalho protegido. Você lê direto da memória original, mas não pode alterar.*/