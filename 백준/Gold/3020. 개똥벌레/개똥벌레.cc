#include <bits/stdc++.h>
using namespace std;
int n, m;
int x, y;
int a[2000000];
int b[2000000];
int arr[2000000];
int a1[2000000];
int b1[2000000];

int main(){
    cin >> n >> m;
    int mx = -1;
    int my = -1;
    for(int i = 0; i < n/2; i++){
        cin >> x >> y;
        mx = max(mx, x);
        my = min(my, m - y + 1);
        a[x] ++;
        b[m - y + 1] ++;
    }
    for(int i = mx - 1; i >= 1; i--){
        a[i] += a[i + 1];
    }
    for(int i = my; i <= m; i++){
        b[i] += b[i - 1];
    }
    for(int i = 1; i <= m; i++){
        arr[i] = a[i] + b[i];
    }
    sort(arr + 1, arr + m + 1);
    cout << arr[1] <<" "<< (upper_bound(arr + 1, arr + m + 1,arr[1])-arr+1)-(lower_bound(arr + 1, arr + m + 1,arr[1])-arr+1);

}
