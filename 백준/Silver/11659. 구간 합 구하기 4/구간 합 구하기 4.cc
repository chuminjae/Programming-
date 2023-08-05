#include <bits/stdc++.h>
using namespace std;
int n, m;
int aa[100001];
int main(){
      ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int x, y;
    int sum = 0;
    int k = 0;
    cin >> n >> m;
    for(int i = 1; i <= n; i++){
        cin >> k;
        sum += k;
        aa[i] = sum;

    }
    for(int i = 1; i <= m; i++){
        cin >> x >> y;
        cout << aa[y] - aa[x - 1] << "\n";
    }
}


