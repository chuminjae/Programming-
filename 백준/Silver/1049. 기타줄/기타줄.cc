# include <bits/stdc++.h>
using namespace std;
int n;
int fcost[100];
int cost[100];
int ncost[100];
int brk;
int check(int a, int cnt){
    if(a >= 6){
        if(fcost[0] > ncost[0]){
            cnt += ncost[0];
        }
        else{
            cnt += fcost[0];
        }
        a -= 6;
        int p = check(a, cnt);
        return p;
    }
    else{
        for(int i = 0; i < n; i++){
            ncost[i] = cost[i]  * a;
        }
        if(ncost[0] < fcost[0]){
            cnt += ncost[0];
        }
        else{
            cnt += fcost[0];
        }
        return cnt;


    }
}





int main()
{
    cin >> brk >> n;
    for(int i = 0; i < n; i++){
        cin >> fcost[i] >> cost[i];
    }
    sort(fcost, fcost + n);
    sort(cost, cost + n);
    for(int i = 0; i < n; i++){
        ncost[i] = cost[i] * 6;
    }
    cout << check(brk, 0);
}
