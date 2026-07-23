#include <iostream>
#include <bits/stdc++.h>
#include <queue>
#include <algorithm>

using namespace std;
const int MAXN = 200005;

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m, k;
    cin >> n >> m >> k;

    vector<int> produto(n+1);
    
    vector<int> adj[MAXN];

    vector<int> dist(n+1, -1);


    for(int i = 1; i <= n; i++){
        cin >> produto[i];
    }

    for(int i = 0; i< m; i++){
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);

    }

    queue<int>fila;
    dist[1] = 0;
    fila.push(1);


    while(!fila.empty()){
        int atual = fila.front();
        fila.pop();
        
        for(int vizinho : adj[atual]){ //começa no 1
            if(dist[vizinho] == -1){
                dist[vizinho] = dist[atual] + 1;
                fila.push(vizinho);
            }
        }
    }

    vector<int> max_dist_prod(k + 1, -1);


    for (int i = 1; i <= n; i++) {
            int p = produto[i];
            max_dist_prod[p] = max(max_dist_prod[p], dist[i]);
        }

    for (int p = 1; p <= k; p++) {
        cout << max_dist_prod[p] << (p == k ? "" : " ");
    }
    
    cout << "\n";
        
    return 0;
}

