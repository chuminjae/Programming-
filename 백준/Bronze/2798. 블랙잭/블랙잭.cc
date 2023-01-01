# include <bits/stdc++.h>
int a[100];
using namespace std;
 int main(){
    int n;
    int sum;
    int s = 0;
    int x = 0;
    int mx = 0;
    cin >> n;
    cin >> sum;
    for(int i= 0; i < n; i++){
        cin >> a[i];
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            for(int k = 0; k < n; k++){
                if(i == j || i == k || j == k) continue;
                s = a[i] + a[j] + a[k];
                if(s <= sum){
                    mx = max(s, mx);
                }
            }
        }
    }
    cout << mx;

}
