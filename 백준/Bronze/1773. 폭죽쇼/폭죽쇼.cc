#include <bits/stdc++.h>
using namespace std;
int p[101];
int x[2000000];
int main()
{
    int a, b;
    cin >> a >> b;
    for(int i = 1; i <= a; i++){
        cin >> p[i];
    }
    for(int i = 1; i <= b; i++){
        for(int j = 1; j <= a; j++){
            if(i % p[j] == 0){
                x[i] ++;
            }
        }
    }
    int cnt = 0;
    for(int i = 1; i <= b; i++){
        if(x[i] != 0){
            cnt ++;
        }
    }
    cout << cnt;
}

