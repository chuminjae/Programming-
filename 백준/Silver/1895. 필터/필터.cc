#include <bits/stdc++.h>
using namespace std;
int a, b;
int c[41][41];
int md(int i, int j){
int d[9];
int dd = 0;
for(int x = i; x < i + 3; x++){
    for(int y = j; y < j + 3; y++){
        d[dd] = c[x][y];
        dd++;
    }
}
sort(d,d + 9);
return d[4];
}
int main(){
    int a, b;
    int cr;
    int cnt = 0;
    cin >> a >> b;
    for(int i = 0; i < a; i++){
        for(int j = 0; j < b; j++){
            cin >> c[i][j];
        }
    }
    cin >> cr;
    for(int i = 0; i < a; i++){
        for(int j = 0; j < b; j++){
            if(((i + 2) < a) && (j + 2) < b){
            if(md(i,j) >= cr){
                cnt ++;
            }
            }

        }
    }
    cout << cnt;
}

