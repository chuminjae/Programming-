# include <bits/stdc++.h>
using namespace std;
int n;
int main(){
    cin >> n;
    int a[10000];
    int cnt = 1;
    int ax = INT_MIN;
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    for(int i = 0; i < n; i++){
        if(a[i] > cnt){
            cnt++;
        }
        else{
            cnt = a[i];
        }
        ax = max(cnt, ax);
    }
    cout << ax;
}
