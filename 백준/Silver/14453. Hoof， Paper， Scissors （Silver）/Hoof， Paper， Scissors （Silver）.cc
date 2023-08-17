#include <bits/stdc++.h>
using namespace std;
int n;
string ss;
int p[2000000];
int h[2000000];
int s[2000000];
int sum = 0;
int sum1 = 0;
int sum2 = 0;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    for(int i = 1; i <= n; i++)
    {
        cin >> ss;
        if(ss == "P")
        {
             s[i] += s[i - 1] + 1;
             p[i] += p[i - 1];
             h[i] += h[i - 1];
        }
        else if(ss == "H")
        {
            p[i] += p[i - 1]+ 1;
            s[i] += s[i - 1];
            h[i] += h[i - 1];
        }
        else if(ss == "S")
        {
            h[i] += h[i - 1]+ 1;
            s[i] += s[i - 1];
            p[i] += p[i - 1];
        }
    }
    int a = 0;
    for(int i = 1; i <= n; i++){
        a = max(a, s[i] + p[n] - p[i]);
        a = max(a, s[i] + h[n] - h[i]);
        a = max(a, p[i] + s[n] - s[i]);
        a = max(a, p[i] + h[n] - h[i]);
        a = max(a, h[i] + s[n] - s[i]);
        a = max(a, h[i] + p[n] - p[i]);
    }
    cout << a;
}
