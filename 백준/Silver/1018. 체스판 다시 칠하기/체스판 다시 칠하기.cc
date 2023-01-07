# include <bits/stdc++.h>
using namespace std;
int cnt = 0;
int cnt1;
int cnt2;
int n, m;
int k;
int xz = 0;
int a[51][52];
int check(int o, int p){
        cnt1 = 0;
        cnt2 = 0;
        k = 0;
        for(int i = o; i < o + 8; i++){
        for(int j = p; j < p + 8; j++){
            if(a[i][j] != k){
                cnt1 ++;
            }
            if(k == 0){
                k = 1;
            }
            else{
                k = 0;
            }
        }
        if(k == 0){
                k = 1;
            }
            else{
                k = 0;
            }
    }

        k =1;
        for(int i = o; i < o + 8; i++){
        for(int j = p; j < p + 8; j++){
            if(a[i][j] != k){
                cnt2 ++;
            }
            if(k == 0){
                k = 1;
            }
            else{
                k = 0;
            }
        }
         if(k == 0){
                k = 1;
            }
            else{
                k = 0;
            }
    }
    return min(cnt1, cnt2);
}



int main(){
    int k =0;
    int c = 0;
    int cnt1 ,cnt2 = 0;
    cin >> n >> m;
    char s;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> s;
            if(s == 'B'){
                a[i][j] = 0;
            }
            else if(s == 'W'){
                a[i][j] = 1;
            }
        }
    }
    xz = 5000;
    for(int i = 0; i <= n - 8; i++){
        for(int j = 0; j <= m - 8; j++){
            xz = min(xz, check(i, j));
        }
    }
    cout << xz;
}
