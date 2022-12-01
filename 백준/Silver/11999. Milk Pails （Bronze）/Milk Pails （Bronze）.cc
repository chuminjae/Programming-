    # include <bits/stdc++.h>
    # include <math.h>
    using namespace std;
    int main(){
            ios_base::sync_with_stdio(0);
            cin.tie(0);
            int a, b;
            cin >> a >> b;
            int amt;
            int result = 0;
            cin >> amt;
            int x = amt / a;
            int y = amt / b;
            for(int i = 0; i <= x; i++){
                for(int j = 0; j <= y; j++){
                    if((i * a) + (j * b) <= amt)
                    result = max(result, (i * a) + (j * b));
                }
            }
            cout << result;



    }



