#include <bits/stdc++.h>
using namespace std;
int n;
struct point{
    int a,b;
    string y;
};
point arr[100000];
int cmp(point c,point d)
{
    if(c.a==d.a)
    {
        return c.b<d.b;
    }
    return c.a<d.a;
}
int main(){
   cin >> n;
   for(int i = 0; i < n; i++){
    cin >> arr[i].a >> arr[i].y;
    arr[i].b = i + 1;
   }
   sort(arr, arr + n, cmp);
   for(int i = 0; i < n; i++){
        cout << arr[i].a <<" " <<arr[i].y << "\n";
   }
}
