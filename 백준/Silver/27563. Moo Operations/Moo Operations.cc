#include <bits/stdc++.h>
using namespace std;
int n;
void test()
{
    int cnt = INT_MAX;
    string s = "";
    string p = "";
    cin >> s;
    int k = s.length();
    for(int i = 0; i <= k - 3; i ++)
    {
        for(int j = i; j < i+ 3; j++)
        {
            p += s[j];
        }
        if(p == "MOO"){
            cnt = min(cnt, k - 3);
        }
        else if(p == "MOM" || p == "OOO"){
            cnt = min(cnt, k - 2);
        }
        else if(p == "OOM"){
            cnt = min(cnt, k - 1);
        }
        p = "";

    }
    if(cnt != INT_MAX){
        cout << cnt << "\n";

    }
    else{
        cout << -1 << "\n";
    }

}






 int main(){

 cin >> n;
 for(int i = 0; i < n; i++){
    test();
 }
 }
