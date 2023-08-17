#include <bits/stdc++.h>
# define int long long
using namespace std;
int n;
int c[30];
int h[30];
int amt[30];
main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> c[i];
    }
    for(int i = 0; i < n; i++){
        cin >> h[i];
    }
    sort(c,c+ n);
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(c[i] <= h[j]){
                amt[i] ++;
            }
        }
    }
    int res = 1;
    for(int i = n -1; i >= 0; i --){
        res *= amt[i] - (n - 1 - i);
    }
    cout << res;
}
