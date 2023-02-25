#include <bits/stdc++.h>
using namespace std;
int p, m, d,s;
int number[200];
int n;
int mx = INT_MIN;
int mn = INT_MAX;

void check(int a, int b, int c, int d, int sum, int cnt)
{
    if(cnt == n - 1)
    {
        mx = max(sum, mx);
        mn = min(sum, mn);
    }
    else
    {
        if(a > 0)
        {
            check(a-1, b, c, d, sum + number[cnt + 1], cnt +1);
        }
        if(b > 0)
        {
            check(a, b-1, c, d, sum - number[cnt + 1], cnt +1);
        }
        if(c > 0)
        {
            check(a, b, c-1, d, sum * number[cnt + 1], cnt +1);
        }
        if(d > 0)
        {
            check(a, b, c, d-1, sum / number[cnt + 1], cnt +1);
        }

    }
}


int main()
{
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> number[i];
    }
    cin >> p >> m >> d >> s;
    check(p,m,d,s,number[0], 0);
    cout << mx <<"\n" << mn;
}





