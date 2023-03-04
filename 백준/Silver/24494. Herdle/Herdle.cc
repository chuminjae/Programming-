#include <bits/stdc++.h>
using namespace std;
char a [3][3];
char b[3][3];
int number[100];
int number1[100];
int tmp[100];
int green;
int yellow;

void check(){
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            if(a[i][j] == b[i][j]){
                green++;
                number[a[i][j]] --;
                number1[a[i][j]] --;
            }
        }
    }
    for(int i = 65; i < 91; i++){
        yellow += min(number[i], number1[i]);
    }

    }




int main(){
    char c;
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cin >> a[i][j];
            number[a[i][j]] ++;
            }
    }
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cin >> b[i][j];
            number1[b[i][j]] ++;
        }
    }
    check();
    cout << green << "\n" << yellow;
}
