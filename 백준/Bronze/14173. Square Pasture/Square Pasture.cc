#include <bits/stdc++.h>
using namespace std;
 int result1 , result2, result;
int main(){
    int x1, x2, y1, y2, z1,z2, p1, p2;
    cin >> x1 >> y1 >> x2 >> y2;
    cin >> z1 >> p1 >> z2 >> p2;
    result1= max(x2, z2) - min(x1, z1);
    result2 = max(y2, p2) - min(y1, p1);
    result = max(result1, result2);
    cout << result * result;
    return 0;
}

