#include <bits/stdc++.h>
using namespace std;
#define int long long 
int n;
int t, t1;
int cnt;
int a[2000];
int b[20000];
int a1[501000];
int b1[501000];
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >>n;
    cin >> t;
    for(int i = 1; i <= t; i++)
    {
        cin >> a[i];
    }
    cin >> t1;
    for(int i = 1; i <= t1; i++)
    {
        cin >> b[i];
    }
    for(int i = 1; i <= t; i++)
    {
        a[i] += a[i - 1];
    }
    for(int i = 1; i <= t1; i++)
    {
        b[i] += b[i - 1];
    }
    int x = 0;
    for(int i = 1; i <= t; i++)
    {
        for(int j = i; j <= t; j++)
        {
            a1[x] = a[j] - a[i - 1];
            x++;
        }
    }
    int xx = 0;
     for(int i = 1; i <= t1; i++)
    {
        for(int j = i; j <= t1; j++)
        {
            b1[xx] = b[j] - b[i - 1];
            xx++;
        }
    }
    sort(b1, b1 + xx);
    for(int i = 0; i < x; i++){
        cnt += (upper_bound(b1, b1 + xx,n - a1[i])-b1+1)-(lower_bound(b1, b1 + xx,n - a1[i])-b1+1);
    }
    cout << cnt;
}
