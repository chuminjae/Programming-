#include <bits/stdc++.h>
using namespace std;
int n, m;
int a[1000];
int b[1000];
int c[1000];
int s[1000];
int t[1000];
int p[1000];
int my[1000];
int ex[100];
int qw = INT_MAX;
void check(int money, int cnt){
    bool f = true;
    if(cnt == m){
        for(int i = 0; i < n; i++){
            for(int j = s[i]; j <= t[i]; j++){
                if(ex[j] < c[i]){
                    f = false;
                }
            }
        }
        if(f){
            qw = min(qw, money);
        }
    }
    else{
            check(money, cnt + 1);
            for(int i = a[cnt]; i <= b[cnt]; i++){
                ex[i] += p[cnt];
            }
            check(money + my[cnt], cnt + 1);
            for(int i = a[cnt]; i <= b[cnt]; i++){
                ex[i] -= p[cnt];
            }

        }
    }














int main(){
    cin >> n >> m;
    for(int i = 0; i < n; i++){
        cin >> s[i] >> t[i] >> c[i];
    }
    for(int i =0; i < m; i++){
        cin >> a[i] >> b[i] >> p[i] >> my[i];
    }
    check(0,0);
    cout << qw;
}
