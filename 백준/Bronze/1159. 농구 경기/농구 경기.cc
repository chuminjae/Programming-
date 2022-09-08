#include <iostream>
#include <string>

using namespace std;
int p[27];
int main()
{
    int a;
    cin >> a;
    string b[150];
    int x[150];
    for(int i = 0; i < a; i++){
        cin >> b[i];
    }

    for(int j =0; j < a; j++){
        x[j] = b[j][0];
    }

    int cnt = 0;
    int check = 1;
    for(int i = 0; i < a; i++){
        for(int j = 0; j < a; j++){
            if(x[i] == x[j]){
                cnt++;
            }
        }
        if(cnt >= 5){
            check = 0;
            p[x[i] - 96] = 1;
        }
        cnt = 0;
    }

    if(check == 1){
        cout << "PREDAJA";
    }else{
        for(int i = 1; i < 27; i++){
            if(p[i] == 1){
                cout << (char)(i + 96);
            }
        }
    }
    return 0;
    }
