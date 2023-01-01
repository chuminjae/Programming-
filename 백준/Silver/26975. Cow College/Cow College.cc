# include <bits/stdc++.h>
long long a[100000];
using namespace std;
 int main(){
    long long n;
    cin >> n;
    vector <long long> s(n);
    long long k = n;
    long long v;
    for(long long i = 0; i < n; i++){
        cin >> v;
        s[i] = v;
    }
    sort(s.begin(), s.end());
    for(long long i = 0; i < n; i++){
        a[i] = s[i] * (n - i);
    }
    long long mx = a[0];
    for(long long i = 0; i < n; i++){
        mx = max(mx, a[i]);
    }
    for(long long i = 0; i < n; i++){
        if(a[i] == mx){
            cout << a[i] << " " << s[i];
            break;
        }
    }
}
