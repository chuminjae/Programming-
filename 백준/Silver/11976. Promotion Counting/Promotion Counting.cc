# include <bits/stdc++.h>
int a[4][2];
int k;
int q;
int x;
int c;
using namespace std;
int main(){
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 2; j++){
            cin >> a[i][j];
        }
    }
    k = a[3][1] - a[3][0];
    a[2][0] -= k;
    q = a[2][1] - a[2][0];
    a[1][0] -= q;
    x = a[1][1] - a[1][0];
    cout << x << "\n" << q << "\n" << k;
}
