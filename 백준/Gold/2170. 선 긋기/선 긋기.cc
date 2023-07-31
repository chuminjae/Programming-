#include <bits/stdc++.h>
using namespace std;
long long n;
long long cnt;
long long ms;
long long mx;
long long val = 0;
struct point{
    long long a, b;
};
point arr[1000000];
int cmp(point c,point d)
{
    if(c.a == d.a)
    {
        return c.b<d.b;
    }
    return c.a < d.a;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> n;
    for(long long i = 0; i < n; i++){
        cin >> arr[i].a >> arr[i].b;
    }
    sort(arr, arr + n, cmp);
    long long ms = arr[0].a;
    long long mx = arr[0].b;
    cnt = mx - ms;
    for(long long i = 1; i < n; i++){
        if(mx >= arr[i].a){
            if(mx < arr[i].b){
                mx = arr[i].b;
            }
        }
        else{
            val += mx - ms;
            ms = arr[i].a;
            mx = arr[i].b;
        }
        cnt = mx - ms;

    }
    cout << cnt + val;
}
