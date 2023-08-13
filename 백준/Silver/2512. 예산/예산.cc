#include <bits/stdc++.h>
using namespace std;
#define int long long
int n,m;
int a[10000000];
int sum;
int crr;
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >>  n;
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
        sum += a[i];
    }
    sort(a, a + n);
    cin >> m;
    int l = 0;
    int r = a[n - 1];
        while( l <= r)
        {
            int cnt = 0;
            int mid = (l + r) / 2;
            for(int i = 0; i < n; i++)
            {
                if(a[i] < mid)
                {
                    cnt += a[i];
                }
                else
                {
                    cnt += mid;
                }
            }
            if(cnt <= m)
            {
                crr = mid;
                l = mid + 1;
            }
            else
            {
                r  = mid - 1;
            }
        }
    cout << crr;
    }

