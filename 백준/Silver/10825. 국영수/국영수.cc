#include <bits/stdc++.h>
using namespace std;

struct point{
    string name;
    int a;
    int b;
    int c;
};
point arr[100001];

int cmp(point x, point y){
    if(x.a == y.a && x.b == y.b && x.c == y.c){
        return x.name < y.name;
    }
    else if(x.a == y.a && x.b == y.b){
        return x.c > y.c;
    }
    else if(x.a == y.a){
        return x.b < y.b;
    }
    return x.a > y.a;
}
int main(){
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> arr[i].name >> arr[i].a >> arr[i].b >> arr[i].c;
    }
    sort(arr, arr + n, cmp);
    for(int i = 0; i < n; i++){
        cout << arr[i].name << "\n";
    }
}
