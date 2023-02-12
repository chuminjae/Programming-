# include <bits/stdc++.h>
using namespace std;
long long cost[100000];
long long length[100000];
long long ex[10000];
long long cnt;
long long n, s;
int main(){
    cin >> n;
    for(long long i = 0; i < n - 1; i++){
        cin >> length[i];
    }
    for(long long i = 0; i < n; i++){
        cin >> cost[i];
    }
    long long q = cost[0];
    for(long long i = 0; i < n - 1; i ++){
        if(q >= cost[i]){
            q = cost[i];
            cnt += q * length[i];
        }
        else{
            cnt += q * length[i];
        }
    }
    cout << cnt;

}


















