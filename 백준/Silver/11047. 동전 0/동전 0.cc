#include <bits/stdc++.h>
using namespace std;
int cnt;
int main(){
    int n, k;
    cin >> n >> k;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    for (int i = n-1; i >= 0; i--) {
        int money = a[i];
        cnt += k / money;
        k %= money;
    }
    cout << cnt << '\n';
}






