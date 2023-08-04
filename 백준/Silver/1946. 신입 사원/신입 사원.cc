#include <bits/stdc++.h>
using namespace std;
struct pr{
    int a;
    int b;
};
pr prop[100000];
int cmp(pr c, pr d){
    if(c.a == d.a){
        return c.b < d.b;
    }
    return c.a < d.a;
}

void test(){
    int cnt;
    int m;
    cin >> m;
    cnt = 1;
    for(int i = 0; i < m; i++){
        cin >> prop[i].a >> prop[i].b;
    }
    sort(prop, prop + m, cmp);
    int mx = prop[0].b;
    for(int i = 1; i < m; i++){
        if(prop[i].b < mx){
            mx = prop[i].b;
            cnt ++;
        }   
    }
    cout << cnt << "\n";

}

int main(){
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        test();
    }

}
