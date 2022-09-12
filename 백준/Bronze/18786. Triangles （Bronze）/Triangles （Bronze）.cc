#include <bits/stdc++.h>
using namespace std;
int area;
int result;
int main(){
    int a;
    cin >> a;
    int x[a];
    int y[a];
    for(int i = 0; i < a; i++){
        cin >> x[i] >> y[i];
    }
    for(int j = 0; j < a; j++){
        for(int p = 0; p < a; p++){
          for(int k = 0; k < a; k++){
            if(x[j] == x[p] && y[p] == y[k]){
              area = abs((y[p] - y[j])) * abs((x[k] - x[p]));
              result = max(result, area);
            }
          }
        }
    }
     cout << result;
}

