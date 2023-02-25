#include <bits/stdc++.h>
using namespace std;
string s;
int n, m;
int a[51][51];
int b[51][51];
bool cq;
int cnt;
void check()
{
    for(int i = 0; i < n - 2; i++)
    {
        for(int j = 0; j < m- 2; j++)
        {
            if(a[i][j] != b[i][j])
            {
                for(int p = i; p < i + 3; p++)
                {
                    for(int k = j; k < j + 3; k++)
                    {
                        if(a[p][k] == 0)
                        {
                            a[p][k] = 1;
                        }
                        else
                        {
                            a[p][k] = 0;
                        }
                    }
                }

                cnt ++;
            }

        }
    }
}

int main()
{
    cin >> n >> m;
    for(int i = 0; i < n; i++)
    {
        cin >> s;
        for(int j = 0; j < m; j++)
        {
            if(s[j] == '1')
            {
                a[i][j] = 1;
            }
            else
            {
                a[i][j] = 0;
            }
        }
    }
    for(int i = 0; i < n; i++)
    {
        cin >> s;
        for(int j = 0; j < m; j++)
        {
            if(s[j] == '1')
            {
                b[i][j] = 1;
            }
            else
            {
                b[i][j] = 0;
            }
        }
    }
    if(n >= 3 && m >= 3){
        check();
    }
    else{
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                if(a[i][j] != b[i][j]){
                        cq = true;
                }
            }
        }
        if(cq){
            cout << -1;
            return 0;
        }
        else{
            cout << 0;
            return 0;
        }
    }
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            if(a[i][j] != b[i][j])
            {
                cout <<  -1;
                return 0;
            }
        }
    }
    cout <<  cnt;
}
