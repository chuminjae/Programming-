#include <bits/stdc++.h>
# define int long long
using namespace std;
int n, m;
int cnt;
int a[2000000];
int b[100000];
int curr;
int ln;
int fin;
int sum;
main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> m;
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    sort(a, a + n);
    int l = 0;
    int r = n  - 1;
    while(l < r){
        sum = a[l] + a[r];
        if(sum == m){
            cnt++;
            l++;
        }
        else if(sum > m){
            r--;
        }
        else if(sum < m){
            l++;
        }

    }
    cout << cnt;
}
