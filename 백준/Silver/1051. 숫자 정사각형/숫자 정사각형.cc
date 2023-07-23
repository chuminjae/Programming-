#include <bits/stdc++.h>
using namespace std;
int a, b;
string s;
string c[51][51];
bool check = false;
void strr(string s, int i)
{
    for(int j = 0; j < b; j++)
    {
        c[i][j] = s[j];
    }
}
int main()
{
    cin >> a >> b;
    int mn = 1;
    for(int i = 0; i < a; i++)
    {
        cin >> s;
        strr(s, i);
    }

    for(int i = 0; i < a; i++)
    {
        for(int j = 0; j < b; j++)
        {
            for(int k = 1;; k ++){
                if(((i + k) >=a) || ((j + k) >= b)){
                       break;
                }
                if(c[i][j] == c[i][j + k] && c[i][j] == c[i + k][j + k] && c[i][j] == c[i+k][j]){
                    check = true;
                    if(mn < k){
                        mn = k;
                    }
                }
            }
        }
    }
    if(check)
    {
        cout << pow((mn + 1),2);
    }
    else{
        cout << 1;
    }
    return 0;
}

