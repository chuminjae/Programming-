#include <bits/stdc++.h>
using namespace std;
int n, m;
int a[1025][1025];
void test(){
int x, x1, y, y1;
cin >> x >> y >> x1 >> y1;
cout << a[x1][y1] - a[x - 1][y1] - a[x1][y - 1] + a[x-1][y-1] << "\n";
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> m;
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= n; j++)
        {
            cin >> a[i][j];
        }
    }
    for(int i = 1; i <= n; i++)
    {
        for(int j= 1; j <= n; j++)
        {
            a[i][j] += a[i][j - 1];
        }
    }
    for(int i = 1; i <= n; i++)
    {
        for(int j= 1; j <= n; j++)
        {
            a[i][j] += a[i - 1][j];
        }
    }

    for(int i = 0; i < m; i++){
        test();
    }

}
