#include <bits/stdc++.h>
using namespace std;
int n;
int cnt;
struct point{
    long long a;
    int color;
};
point arr[100000];
int cmp(point c,point d)
{
    if(c.color == d.color)
    {
        return c.a<d.a;
    }
    return c.color < d.color;
}
int main(){
   cin >> n;
   for(int i = 0; i < n; i++){
    cin >> arr[i].a >> arr[i].color;
   }
   sort(arr, arr + n, cmp);

   if(arr[0].color == arr[1].color){
        cnt += abs(arr[0].a - arr[1].a);
   }
   for(int i = 1; i < n - 1; i++){
        if(arr[i].color == arr[i -1].color && arr[i].color == arr[i + 1].color){
                if(abs(arr[i].a - arr[i + 1].a) > abs(arr[i].a - arr[i - 1].a)){
                    cnt += abs(arr[i].a - arr[i - 1].a);
                }
                else{
                    cnt += abs(arr[i].a - arr[i + 1].a);
                }
        }
        else if(arr[i].color == arr[i - 1].color){
            cnt += abs(arr[i].a - arr[i - 1].a);
        }
        else if(arr[i].color == arr[i + 1].color){
            cnt += abs(arr[i].a - arr[i + 1].a);
        }
   }
   if(arr[n - 1].color == arr[n - 2].color){
        cnt += abs(arr[n -1].a - arr[n - 2].a);
   }
   cout << cnt;
}
