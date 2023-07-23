#include <bits/stdc++.h>
using namespace std;
string h[100];
string rev(string s){
    string k = "";
    for(int i = 0; i < s.length(); i++){
        k += s[s.length() - i - 1];
    }
    return k;

}
int main()
{
    int a;
    cin >> a;
    for(int i = 0; i < a; i++){
        cin >> h[i];
    }

    for(int i = 0; i < a; i++){
        for(int j = 0; j < a; j++){
                if(h[i] == rev(h[j])){
                    string v = h[i];
                    cout << v.length() << " ";
                    cout << v[v.length() / 2];
                    return 0;
                }
        }
    }

}

