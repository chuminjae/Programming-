# include <iostream>
# include <string>
using namespace std;
int main() {
	string s;
	cin >> s;
	int a = s.length();
	int sum = 0;
	int p = 1;
	for (int i = 0; i < a; i++) {
		sum = sum + s[i] -  48;
	}
	if(a == 1){
        cout << '0' <<"\n";
        fill(s.begin(), s.end(), '0');
		s = to_string(sum);
		a = s.length();
		sum = 0;
		for (int i = 0; i < a; i++) {
			sum = sum + s[i] - 48;
		}
		if (sum == 3 || sum == 6 || sum == 9) {
			cout << "YES";
		}
		else {
			cout << "NO";
		}

	}
	else{
        while (sum / 10 != 0) {
		fill(s.begin(), s.end(), '0');
		s = to_string(sum);
		a = s.length();
		sum = 0;
		for (int i = 0; i < a; i++) {
			sum = sum + s[i] - 48;
		}
		p++;
	}
		cout << p << "\n";
		if (sum == 3 || sum == 6 || sum == 9) {
			cout << "YES";
		}
		else {
			cout << "NO";
		}
		}
		return 0;

		/* if (sum / 3 == 0 && sum % 3 == 0) {
			cout << "YES";
		}
		else {
			cout << "NO";
		}*/

	}
