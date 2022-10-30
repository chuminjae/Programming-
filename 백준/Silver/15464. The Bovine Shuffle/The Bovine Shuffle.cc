#include <iostream>
#include <string>
#include <bits/stdc++.h>
using namespace std;
int main()
{
   int a;
   cin >> a;
   int v[a + 1];
   int k[a + 1];
   int tmp[a+ 1];
   for(int i  = 1; i <= a; i++){
    cin >> v[i];
   }
   for(int i = 1; i <= a; i++){
    cin >> k[i];
   }
   for(int i = 0; i < 3; i++){
        for(int j = 1; j <= a; j++){
            tmp[j] = k[v[j]];
        }
        for(int j = 1; j <= a; j++){
            k[j] = tmp[j];
        }
   }
   for(int i = 1; i <= a; i ++){
    cout << k[i] << "\n";
   }
}
