#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m;
    cin >> n >> m;

    vector<int> a(n);
    //a.push_back(0);

    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    vector<int> b(m);
    //b.push_back(0);
    for(int i = 0; i<m; i++){
        cin >> b[i];
    }

    /*for(int i = 1; i<=n; i++){
        cout << a[i] << "\n";
    }
    cout << "\n";

    for(int i = 1; i<=m; i++){
        cout << b[i] << "\n";
    }*/

    sort(a.begin(), a.end());

    //cout << "s\n";

    for(int i = 0; i< m; i++){
        int qtd;
        qtd = upper_bound(a.begin(), a.end(), b[i]) - a.begin();
        
        cout << qtd << (i == m-1 ? "": " ");
    }
        //cout << qtd-1 << endl;
    
    
    cout << "\n";

    return 0;
}
