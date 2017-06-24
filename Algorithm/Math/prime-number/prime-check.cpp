#include <iostream>
#include <cmath>
using namespace std;

int n;

bool prime_check(int n) {
	if (n < 2)
		return false;

	for (int i = 2; i*i <= n; i++)
		if (n % i == 0)
			return false;

	return true;
}

int main() {
	cin >> n;
	cout << prime_check(n) << endl;
}
