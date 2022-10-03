# include <bits/stdc++.h>
using namespace std;
int b;
vector <int> s;
int main(){
    int p;
    cin >> p;
    int n[p];
    for(int i = 0; i < p; i++){
        cin >> n[i];
        s.push_back(n[i]);
    }
    sort(s.begin(), s.end());
    s.erase(unique(s.begin(), s.end()), s.end());
    int k = s.size();
    for(int i = 0; i < k; i++){
        cout << s[i] << " ";
    }


}
