#include <bits/stdc++.h>
using namespace std;
int main(){
    int a;
    cin >> a;
    int k;
    int cnt = 0;
    stack <int> p;
    for(int i = 0; i < a; i++){
        cin >> k;
        if(k != 0){
            p.push(k);
        }
        else{
            p.pop();
        }
    }
    while( !p.empty()){
        cnt = cnt + p.top();
        p.pop();
    }
    cout << cnt;




}
