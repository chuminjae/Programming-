#include <bits/stdc++.h>
using namespace std;
int n, m,sum;
int a[2000000];
bool check(int x)
{
    int cnt = 1;
    int residual = x;
    for(int i = 0; i < n; i++)
    {
        if(a[i] > x)
        {
            return false;
        }
        if(a[i] > residual)
        {
            cnt ++;
            residual = x;
        }
        residual -= a[i];
    }
    return cnt <= m;
}

int main()
{
    cin >> n >> m;
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
        sum += a[i];
    }
    int l = 1;
    int r = sum;
    int ans = INT_MAX;
    while(l <= r)
    {
        int mid = (l + r) / 2;
        if(check(mid))
        {
            ans = min(ans, mid);
            r = mid - 1;
        }
        else
        {

            l = mid + 1;
        }
    }
    cout << ans;

}
