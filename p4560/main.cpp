#include <iostream>
using namespace std;

bool isValid(int n) {
	if (n < 100 || n > 999) {
		return false;
	}

	if (n / 100 != n % 10) {
		return false;
	}

	return true;
}

int main() {
	int n, s = 0;
	while (cin >> n) {
		if (n == 0) {
			break;
		}

		bool ok = isValid(n);

		if (ok) {
			s += n;
		}
	}

	/*for (; cin >> n; ) {
		if (n == 0) {
			break;
		}

		if (n < 100 || n > 999) {
			continue;
		}

		if (n / 100 != n % 10) {
			continue;
		}

		s += n;
	}*/

	cout << s;

	return 0;
}