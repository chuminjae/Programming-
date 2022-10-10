# include <iostream>
#include <algorithm>
using namespace std;
int c[4];
int m[4];
int main() {
	for (int i = 1; i < 4; i++) {
		cin >> c[i] >> m[i];
	}
	for (int i = 0; i < 100; i++) {
		int now = (i % 3) + 1;
		int nxt = (i + 1) % 3 + 1;
			if (c[nxt] < m[now] + m[nxt]) {
				m[now] = m[now] + m[nxt] - c[nxt];
				m[nxt] = c[nxt];
				
		}
			else {
				m[nxt] = m[now] + m[nxt];
				m[now] = 0;
				
			}
	}
	for (int i = 1; i < 4; i++) {
		cout << m[i] << "\n";
	}
}