#include <bits/stdc++.h>
# define int long long
using namespace std;
int n, m;
int cnt;
int a[100000];
int b[100000];
int curr;
int ln;
int fin;
int amt;
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
        for(int j = i; j < n; j++){
            amt+= a[j];
            if(amt == m){
                cnt ++;
            }
        }
        amt = 0;
    }
    cout << cnt;
}
