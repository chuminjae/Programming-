#include <bits/stdc++.h>
using namespace std;
int main() {
      int a, b, c;
      cin >> a >> b >> c;
      int total = 11 * 60 * 24 + 11 * 60 + 11;
      int total1 = a * 60 * 24 + b * 60 + c;
      if(total1 - total < 0){
        cout << "-1";
      }
      else{
        cout << total1 - total;
      }
    }





