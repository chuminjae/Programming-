#include <bits/stdc++.h>
using namespace std;
int a[2001][2001];
int cnt;

int main(){
    int x1, y1, x2, y2;
    for(int k = 0; k  < 3; k++){
        cin >> x1 >> y1 >> x2 >> y2;
        x1 = x1 + 1000;
        y1 = y1 + 1000;
        x2 = x2 + 1000;
        y2 = y2 + 1000;
        for(int i = x1; i < x2; i++){
            for(int j = y1; j < y2; j++){
                a[i][j] = 1;
                if(k == 2){
                    a[i][j] = 0;
                }
            }
        }

    }
    for(int i = 0; i < 2001; i++){
        for(int j = 0; j < 2001; j++){
            cnt += a[i][j];
        }
    }
    cout << cnt;


}




