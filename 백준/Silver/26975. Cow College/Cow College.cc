#include <bits/stdc++.h>
using namespace std;
int main() {
	int totalNumberOfCows;
	int x;
	long long maxMoney = 0;
	int bestTuition = 0;
	cin >> totalNumberOfCows;
	// need to use long long
	vector<long long> maxTuition;
	for (int i = 0; i < totalNumberOfCows; i++) {
		cin >> x;
		maxTuition.push_back(x);
	}
	// sorting
	sort(maxTuition.begin(), maxTuition.end());
	for (int i = 0; i < totalNumberOfCows; i++) {
		// there are (totalNumberOfCows - i) cows that can pay the tuition.
		long long currentTuition = maxTuition[i] * (totalNumberOfCows - i);
		if (currentTuition > maxMoney) {
			maxMoney = currentTuition;
			bestTuition = maxTuition[i];
		}
	}

	cout << maxMoney << ' ' << bestTuition << endl;
}