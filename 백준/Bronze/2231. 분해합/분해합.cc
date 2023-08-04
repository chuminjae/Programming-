# include <bits/stdc++.h>
using namespace std;
int sum(int n){
    int k = n;
    while(n != 0){
        k += n % 10;
        n = n / 10;
    }
    return k;
}
 int main(){
    int n;
    cin >> n;
    for(int i = 1; i < n; i++){
        if(n == sum(i)){
            cout << i;
            return 0;
        }
    }
    cout << 0;

}
