#include <bits/stdc++.h>
using namespace std;
int n, m;
int a[1000];
int cnt, k;
int x, y, z;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    sort(a, a + n);
    for(int i = 0; i < n - 2; i++){
        for(int j = i + 1; j < n - 1; j++){
            for(int k = j + 1; k < n; k++){
                    x = a[i];
                    y = a[j];
                    z = a[k];
                    int ln1 = z - y;
                    int ln2 = y - x;
                    if(ln1 <= 2 * ln2 && ln1 >= ln2){
                        cnt ++;
                    }
                }
        }
    }
    cout << cnt;

}
