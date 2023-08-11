#include <bits/stdc++.h>
using namespace std;
int n, m;
int a[1000000];
int sum, k;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> m;
    for(int i = 1; i <= n; i++){
        cin >> k;
        sum += k;
        a[i] = sum;
    }
    int mx = a[m];
    int ny = 0;
    for(int i = n; i >= m; i--){
        ny = a[i] - a[i -m];
        if(ny > mx){
            mx = ny;
        }
    }
    cout << mx;



}
