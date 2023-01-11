# include <bits/stdc++.h>
using namespace std;
bool answer;
bool k[4][26];
bool check[100];
char str[100];

void sr(int a){
    if(str[a] == 0){
        answer = true;
    }
    else{
        for(int i = 0; i < 4; i++){
            if(check[i] ==  false){
                if(k[i][str[a] - 'A']){
                    check[i] = true;
                    sr(a+1);
                    check[i] = false;
                }

            }
        }
    }
}



int main(){
    int n;
    cin >> n;
    for(int i = 0; i < 4; i++){
            cin >> str;
        for(int j = 0; j < 6; j++){
            k[i][str[j] - 'A'] = true;
        }
    }
    for(int i = 0; i < n; i++){
        answer = false;
        cin >> str;
        sr(0);
        if(answer ==  true){
            cout << "YES" << "\n";
        }
        else{
            cout << "NO" << "\n";
        }
    }
}
