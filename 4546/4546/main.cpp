#include <iostream>
using namespace std;

int main() {
	int n, maxi1 = 0, maxi2 = 0;
	while (cin >> n) {
		if (n == 0) break;

		// consideram ca maxi1 > maxi2
		if (n > maxi1) {
			maxi2 = maxi1;
			maxi1 = n;
			continue;
		} 

		if (n > maxi2 && n != maxi1) {
			maxi2 = n;
		}
	}

	if (maxi2 > 0 && maxi1 > 0) {
		cout << (long)maxi1 * (long)maxi2;
	}
	else {
		cout << "NU EXISTA";
	}

	return 0;
}