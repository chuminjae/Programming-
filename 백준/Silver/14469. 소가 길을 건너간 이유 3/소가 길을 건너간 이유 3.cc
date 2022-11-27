# include <bits/stdc++.h>
# include <math.h>
using namespace std;
int main(){
    int a, b,n;
    int t = 0;
    cin >> n;
    vector <pair<int, int>> v;
    for(int i = 0; i < n; i++){
        cin >> a >> b;
        v.push_back({a, b});
    }
    sort(v.begin(), v.end());
    int k = v.size();
    int x = 0;
    for(int i = 0; i < k; i++){
        if(v[i].first >= x){
            x = v[i].first + v[i].second;
        }
        else{
            x += v[i].second;
        }

    }
    cout << x;

}



