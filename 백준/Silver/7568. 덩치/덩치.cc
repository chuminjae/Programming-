#include <bits/stdc++.h>
using namespace std;
int main(){
    int a;
    cin >> a;
    int b[a];
    int c[a];
    int cnt[a];
    for(int i = 0; i < a; i++){
        b[i] = 0;
        c[i] = 0;
        cnt[i] = 0;
    }

    for(int i  = 0; i < a; i++){
        cin>> b[i] >> c[i] ;
    }
    for(int i = 0; i < a; i++){
        for(int j = 0; j < a; j++){
            if(b[i] < b[j]){
                if(c[i] < c[j]){
                    cnt[i] ++;
                }
            }
        }
    }
    for(int i = 0; i < a; i++){
        cout << cnt[i] + 1 << " ";
    }



}




