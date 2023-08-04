# include <iostream>
# include <string>
using namespace std;
int main() {
	string s;
	cin >> s;
	int a = s.length();
	int cnt[27] = {};
	int max = 0;
	int big = 1;
	int p = 0;
	for (int i = 0; i < a; i++) {
		if (s[i] - 90 <= 0) {
			cnt[s[i] - 64] ++;
		}
		else {
			cnt[s[i] - 96] ++;
		}
	}
		max = cnt[1];
		for (int j = 2; j < 27; j++) {
			if (max < cnt[j]) {
				max = cnt[j];
				big = j;
			}
		}
			for (int k = 0; k < 27; k++) {
				if (cnt[k] == cnt[big]) {
					p++;
				}
			}
			if (p == 1) {
				cout << char(big + 64);
			}
			else {
				cout << char(63);
			}

		}
