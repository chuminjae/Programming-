# include <bits/stdc++.h>
using namespace std;
int n, depth;
int store[100];
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
            store[q] = i;
            k(q + 1);
        }
    }
}
int main(){
    cin >> n >> depth;
    k(0);
}
