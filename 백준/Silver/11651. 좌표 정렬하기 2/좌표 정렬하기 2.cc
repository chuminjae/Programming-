#include <bits/stdc++.h>
using namespace std;
int n;
struct point{
    int x,y;
};
point arr[100000];
int cmp(point a,point b)
{
    if(a.y==b.y)
    {
        return a.x<b.x;
    }
    return a.y<b.y;
}
int main(){
   cin >> n;
   for(int i = 0; i < n; i++){
    cin >> arr[i].x >> arr[i].y;
   }
   sort(arr, arr + n, cmp);
   for(int i = 0; i < n; i++){
        cout << arr[i].x <<" " <<arr[i].y << "\n";
   }
}
