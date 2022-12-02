    # include <bits/stdc++.h>
    # include <math.h>
    using namespace std;
    int main(){
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        int n;
        string k;
        string tmp;
        cin >> n >> k;
        bool check;
        for(int i = 1; i <= n; i++){
            check = true;
            for(int j = 0; j <= n - i; j++){
                tmp = k.substr(j, i);
                for(int p = 0; p <= n - i; p++){
                     if(j==p) continue;
                    if(tmp == k.substr(p,i)){
                        check = false;
                    }
                }

            }
            if(check){
                cout << i;
                return 0;
                    }
        }
    }



