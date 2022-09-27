#include <bits/stdc++.h>
using namespace std;
int cnt;
int cnt1;
int main(){
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    for(int i = 0; i < n; i++){
        if(a[i] > 1){
              for(int j = 1; j <= a[i]; j++){
                if(a[i] % j == 0){
                    cnt ++;
                }
              }
              if(cnt  == 2){
                cnt1 ++;
              }
              cnt = 0;




        }
    }
    cout << cnt1;
}


