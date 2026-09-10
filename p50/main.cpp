#include <iostream>
using namespace std;

long factorial(int n) {
	long p = 1;
	for (int i = 1; i <= n; i++) {
		p *= i;
	}
	return p;
}

int main() {
	int n;
	long s = 0;
	cin >> n;

	for (int i = 1; i <= n; i++) {
		s += factorial(i);
	}

	cout << "Rezultatul este " << s;

	return 0;
}