#include <bits/stdc++.h>
using namespace std;
string x[8][8];
int cnt;
void form(string s, int k){
    for(int j = 0; j < 8; j++){
        x[k][j] =s[j];
        }


}
int main(){
    string ss;
    for(int k = 0; k < 8; k++){
        cin >> ss;
        form(ss,k);
    }
    for(int i = 0; i < 8; i += 2){
        for(int j = 0; j < 8; j += 2){
            if(x[i][j] == "F"){
                cnt ++;
            }
        }
    }

    for(int i = 1; i < 8; i += 2){
        for(int j = 1; j < 8; j += 2){
            if(x[i][j] == "F"){
                cnt ++;
            }
        }
    }
    cout << cnt;

}

