#include <iostream>
#include <string.h>
#include <stdio.h>

using namespace std;

int main()
{
    string s;
    cin >> s; // 10,20
    int k = 0;
    int a = s.length(); 
    for(int i = 0; i < a; i++){
        if(s[i] == ','){
            k++;
        }
    }
    cout << k+1;
    return 0;
}
