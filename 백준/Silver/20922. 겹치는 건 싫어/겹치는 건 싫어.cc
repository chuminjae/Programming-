#include <bits/stdc++.h>
# define int long long
using namespace std;
int n, m;
int cnt;
int a[20000001];
int b[20000001];
main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> m;
    for(int i= 0; i < n; i++)
    {
        cin >> a[i];
    }
    int l = 0;
    int ans = 0;
    for(int i = 0; i < n; i++){
        b[a[i]] ++;
        while(b[a[i]] > m){
            b[a[l]] -- ;
            l++;
        }
        ans = max(ans, i - l + 1);
    }
    cout << ans;
}
