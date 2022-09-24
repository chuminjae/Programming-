#include <bits/stdc++.h>
using namespace std;
int main(){
    int a[3];
    for(int i= 0; i < 3; i++){
        cin >> a[i];
    }
    for(int i = 1; i < 3; i++){
        for(int j = i; j >0; j--){
            if(a[j] < a[j - 1]){
                swap(a[j], a[j - 1]);
            }
        }
    }
    cout << a[1];


}






