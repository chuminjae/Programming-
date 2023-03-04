#include <bits/stdc++.h>
using namespace std;
int n;
int a[1200];
int weight;
int qx = INT_MIN;
int start;
int main()
{
    cin >> n;
    int chance = 1;
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    for(int i = 0; i < n - 1; i++){
            weight = a[i];
        for(int j = i + 1; j < n; j++){
            if(weight >= a[j]){
                weight += a[j];
                chance ++;
            }
        }
        qx = max(qx, chance);
        chance = 1;
    }
    if(n == 1){
        cout << 1;
    }else{

    cout << qx;
        }

}
