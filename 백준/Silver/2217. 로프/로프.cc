#include <bits/stdc++.h>
using namespace std;
int a[100000];
int b;
int c;
int cn = 1;
int cnt;
int main(){

    cin >> b;
    for(int i = 0; i < b; i++){
        cin >> a[i];
    }
    sort(a, a + b);
    cnt = 0;
    for(int i = b - 1; i >= 0; i--){
        if(cnt  < a[i] * cn){
            cnt = a[i] * cn;
        }
        cn ++;
    }
    cout << cnt;

}

