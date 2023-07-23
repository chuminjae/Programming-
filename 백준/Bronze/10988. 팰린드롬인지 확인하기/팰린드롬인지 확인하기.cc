#include <bits/stdc++.h>

using namespace std;

int main()
{
    string k;
    cin >> k;
    int l = k.length();
    for(int i = 0; i < l /2; i++){
        if(k[i] != k[l - i - 1]){
            cout << "0";
            return 0;
        }
    }
    cout << "1";
}
