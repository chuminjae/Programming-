# include <iostream>
#include <algorithm>
# include <vector>
int cow[1000];
int cnt;
int length2;
using namespace std;
vector <int> k;
int main() {
	int n;
	int p;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> p;
		k.push_back(p);
	}
	int length1 = n - 1;
	for (int i = n - 1; i > 0; i--) {
		if (k[i - 1] < k[i]) {
			length2++;
		}
		else break;
	}
	cout << length1 - length2;

		

	
}