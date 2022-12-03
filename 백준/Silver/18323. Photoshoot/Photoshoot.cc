 # include <bits/stdc++.h>
# include <math.h>
    using namespace std;
    int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
       int n;
       cin >> n;
        int a[n];
        int b[n-1];
        int cnt = 0;
        for(int i = 0; i < n - 1; i ++){
            cin >> b[i];
        }
        for(int i = 1; i < b[0]; i++){
            a[0] = i;
            for(int j = 0; j < n - 1; j++){
                a[j + 1] = b[j] - a[j];
            }
        for(int p = 0; p < n; p++){
            for(int q = 0; q < n; q++){
                if(p == q){
                    continue;
                }
                if(a[p] == a[q] || a[q] <= 0){
                    cnt ++;
                }
            }
        }
        if(cnt  == 0){
            for(int i = 0; i < n; i++){
            cout << a[i] << " ";
        }
        return 0;
        }
        cnt = 0;
        }
    }
