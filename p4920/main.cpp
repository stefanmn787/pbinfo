#include <iostream>
using namespace std;

long power(int n) {
	long p = 1;
	for (int i = 1; i <= n; i++) {
		p *= n;
	}
	return p;
}

int main() {
	int n;
	long s = 0;
	
	cin >> n;

	for (int i = 1; i <= n; i++) {
		cout << power(i) << " ";
	}

	return 0;
}