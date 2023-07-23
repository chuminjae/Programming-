#include <bits/stdc++.h>

using namespace std;
int ap[300][300];
int k[10000];
void test(int d){
int i, j, x, y;
cin >> i >> j >> x >> y;
i--;
j--;
x--;
y--;
int sum = 0;
for(int a = i; a <= x; a++){
    for(int b = j; b <= y; b++){
        sum += ap[a][b];
    }
}
k[d] = sum;
}

int main()
{
    int a, b;
    cin >> a >> b;
    int x;
    for(int i = 0; i < a; i++){
        for(int j = 0; j < b; j++){
            cin >> ap[i][j];
        }
    }
    int c;
    cin >> c;
    for(int i = 0; i < c; i++){
        test(i);
    }
    for(int i = 0; i < c; i++){
        cout << k[i] << "\n";
    }
}

