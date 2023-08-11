#include <bits/stdc++.h>
using namespace std;
int n, m;
int a[1000001];
int amt, pos;
int sum;
int ss;
int mnn, mxx;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> m;
    int mx =0;
    for(int i = 1;i <= n; i++){
        cin >> amt >> pos;
        a[pos + 1] = amt;
        if(pos > mx){
            mx = pos + 1;
        }

    }
    for(int i = 1; i <= mx; i++){
        sum += a[i];
        a[i] = sum;
    }
    for(int i = 1; i <= mx; i++){
        if((i - m) <= 0){
             mnn = 0;
        }
        else{
             mnn = a[i -m -1];
        }

        if((i + m) > mx){
             mxx = a[mx];
        }
        else{
            mxx = a[i + m];
        }


        int su = mxx - mnn;
        ss = max(ss, su);
        }
        cout << ss;

}
