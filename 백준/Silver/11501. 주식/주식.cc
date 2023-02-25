    #include <bits/stdc++.h>
    using namespace std;
    int n;
    int a[10000000];
    long check(){
       int s;
       long sum = 0;
       cin >> s;
       for(int i = 0; i < s; i++){
        cin >> a[i];
       }
       int mxx = a[s - 1];
       for(int i = s - 1; i > 0; i--){
            if(mxx < a[i - 1]){
                mxx = a[i - 1];
            }
            else{
                sum += mxx - a[i - 1];
            }
       }
        return sum;
    }




    int main(){
        cin >> n;
        for(int i = 0; i < n; i++){
            cout << check() << "\n";
        }
}



