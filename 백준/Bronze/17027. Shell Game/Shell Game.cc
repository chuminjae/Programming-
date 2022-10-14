# include <iostream>
#include <algorithm>
# include <vector>
using namespace std;
int a[1000];
int choice1[1000];
int choice2[1000];
int guess[1000];
int cnt[1000];
int main() {
	int n;
	cin >> n;
	for (int i = 1; i < n + 1; i++) {
		cin >> choice1[i] >> choice2[i] >> guess[i];
	}
	for (int i = 1; i < 4; i++) {
		a[i] = 1;
		for (int j = 1; j < n + 1; j++) {
			swap(a[choice1[j]], a[choice2[j]]);
			if (a[guess[j]] == 1) {
				cnt[i] ++;
			}
		}
		for (int i = 1; i < 4; i++) {
			a[i] = 0;
		}
	}
	sort(cnt, cnt + 1000);
	cout << cnt[999];

}