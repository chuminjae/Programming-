#include <bits/stdc++.h>
using namespace std;
int fibonacci(int a){
        if(a <= 1){
            return a;
        }
        return fibonacci(a - 1) + fibonacci(a - 2);

    }
    int main(){
        int n;
        cin >> n;
        int k  = fibonacci(n);
        cout << k;
        }





