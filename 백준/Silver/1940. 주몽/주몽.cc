#include <bits/stdc++.h>
# define int long long
using namespace std;
int n, m;
int cnt;
int a[20000];
main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> m;
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(i != j){
            if(a[i] + a[j] ==m){
                cnt ++;
            }
        }
        }

    }
    cout << cnt / 2;


}
