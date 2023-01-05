# include <bits/stdc++.h>
using namespace std;
int n, c;
int arr[100];
bool v[100];
int a[100];
int z = 0;
int cnt = 0;

void w(int k){
    int x = 500;
    if(k == n){
        for(int i = 0; i < n; i++){
            x += a[arr[i]];
              x -= c;
              if(x < 500){
                z = 0;
                break;
              }
              else{
                z++;
              }
        }
        cnt += z / n;
        z = 0;
    }

    else{
        for(int i = 1; i <= n; i++){
            if(! v[i]){
                v[i] = true;
                arr[k] = i;
                w(k + 1);
                v[i] = false;
            }
        }
    }

    }

int main(){
    cin >> n >> c;
    for(int i = 1; i <= n; i++){
        cin >> a[i];
    }
    w(0);
    cout << cnt;



}
