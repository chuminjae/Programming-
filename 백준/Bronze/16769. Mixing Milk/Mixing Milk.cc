# include <bits/stdc++.h>
using namespace std;
int main(){
    int c[3];
    int a[3];
    int amt;
    for(int i = 0; i < 3; i++){
        cin >> c[i] >> a[i];
    }
    for(int i = 0; i < 100; i++){
        amt = min(a[i % 3], c[(i + 1) % 3] - a[(i + 1) % 3]);
        a[i% 3] -= amt;
        a[(i + 1) % 3] += amt;
    }
    for(int i = 0; i < 3; i++){
        cout << a[i] << "\n";
    }

    }
