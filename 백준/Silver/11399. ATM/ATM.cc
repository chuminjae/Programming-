#include <bits/stdc++.h>
using namespace std;
int cnt;
int main(){
    int n;
    int temp;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    for (int i = 0; i < n; i++) {
		for (int j = 0; j < (n - 1) - i; j++) {
			if (a[j] > a[j + 1]) {
				temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;
			}
		}
	}
	int k = n;
	for(int i = 0; i < n; i++){
        cnt += a[i] * k;
        k --;
    }
     cout << cnt;
}

