# include <bits/stdc++.h>
using namespace std;
int n, depth;
int store[100];
bool check[100];
void k(int q){
    int c = q;
    if(c == depth){
        for(int i = 0; i < depth; i++){
            cout << store[i] << " ";
        }
        cout << "\n";
    }
    else{
        for(int i = 1; i <= n; i++){
            if(!check[i]){
                for(int j = i; j >= 0; j--){
                    check[j] = true;
                }
                store[c] = i;
                k(c + 1);
                for(int j = i; j >= 0; j--){
                    check[j] = false;
                }
            }
        }
    }
}
int main(){
    cin >> n >> depth;
    k(0);
}
