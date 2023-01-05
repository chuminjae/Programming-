# include <bits/stdc++.h>
using namespace std;
int n, depth;
int store[100];
bool check[10] = {0,0,0,0,0,0,0,0,0,0};
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
                check[i] = true;
                store[c] = i;
                k(c + 1);
                check[i] = false;
            }
        }
    }
}
int main(){
    cin >> n >> depth;
    k(0);
}
