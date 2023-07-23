#include <bits/stdc++.h>
using namespace std;
int b[200001];
int main()
{
    int a;
    cin >> a;
    for(int i = 1; i <= a; i++){
        cin >> b[i];
    }

    int j = b[1];
    int mn = 0;
    for(int i = 1; i <= a; i++){
        if(j > b[i]){
            j = b[i];
        }
        else{
            if(b[i] - j > mn){
                mn = b[i] - j;
            }
            }
    }
    cout << mn;

}

