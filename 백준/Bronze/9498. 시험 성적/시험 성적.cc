#include <bits/stdc++.h>
using namespace std;
char check(int b){
    if( b >= 90 && b <= 100){
        return 'A';
    }
     if( b >= 80 && b <= 89){
        return 'B';
    }
     if( b >= 70 && b <= 79){
        return 'C';
    }
     if( b >= 60 && b <= 69){
        return 'D';
    }
     if( b <= 50){
        return 'F';
    }



    }
int main(){
   int a, b;
   cin >> a;
   cout << check(a);

}




