# include <bits/stdc++.h>
using namespace std;
int a, b, c;
int n;
bool check(int x, int y, int z){
    if(n == a * x + b * y + c * z){
        return true;
    }
    return false;
}




int main(){
    cin >> a >> b >> c;
    cin >> n;
    for(int i = 0; i <= n / a; i++){
        for(int j = 0; j <= n / b; j++){
            for(int k = 0; k <= n / c; k++){
                if(check(i,j,k)){
                    cout << 1;
                    return 0;
                }
            }
        }
    }
    cout << 0;
}
