#include <bits/stdc++.h>
using namespace std;
int n, m,sum;
int a[2000000];
bool check(int x)
{
    int cnt = 0;
    for(int i = 0; i < m; i++)
    {
        cnt += a[i] / x;
    }
    return cnt >= n;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> m;
    for(int i = 0; i < m; i++)
    {
        cin >> a[i];
    }
    sort(a, a + m);
    int l = 1;
    int r = a[m - 1];
    int ans = 0;
    while(l <= r)
    {
        int mid = (l + r) /2;
        if(check(mid))
        {
            l = mid + 1;
            ans = max(ans, mid);
        }
        else
        {
            r = mid - 1;
        }
    }
    cout << ans;
}
