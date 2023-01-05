# include <bits/stdc++.h>
using namespace std;
bool doomnumber(int x){
    int y = 0;
    int k = 0;
    while(x != 0){
        k = x % 10;
        x = x / 10;
        if(k == 6){
            y ++;
        }
        else{
        y = 0;
        }
        if(y >= 3){
        return true;
        }

    }
    return false;
}




int main(){
    int n;
    cin >> n;
    int c = 0;
    for(int i = 665; i++;){
      if(doomnumber(i)){
        c++;
      }
      if(c == n){
        cout << i;
        break;
      }
    }
}

