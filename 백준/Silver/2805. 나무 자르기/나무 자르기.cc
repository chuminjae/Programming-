#include <bits/stdc++.h>
using namespace std;
#define int long long
int n,m;
int a[10000000];
int x;
int cnt = 0;
int crr = 0;
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    cin >> m;
    int mx =-1;
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
        if(a[i] > mx)
        {
            mx = a[i];
        }
    }
    int l = 0;
    int r = mx;
    while(l <= r)
    { cnt = 0;
        int mid = (l + r) /2;
        for(int i = 0; i < n; i++)
        {

            if(a[i] - mid >= 0)
            {
                cnt += a[i] - mid;
            }
        }
        if(cnt >= m)
        {
            crr = mid;
            l = mid + 1;
        }
        else if(cnt < m)
        {
            r = mid - 1;
        }
    }
    cout << crr;

}
