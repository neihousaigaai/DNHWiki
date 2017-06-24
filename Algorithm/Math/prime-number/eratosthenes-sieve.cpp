#include <iostream>
#include <cmath>
using namespace std;

const int MAX = 1000;

bool check[MAX + 1];

void eratosthenes(int n) {
	for (int i = 1; i <= n; i++)
		check[i] = false;
	
	for (int i = 2; i <= n; i++) {
		if (check[i] == false) {
			for (int j = i * 2; j <= n; j += i) check[j] = true;
		}
	}
	for (int i = 2; i <= n; i++) {
		if (check[i] == false) cout << i << " ";
	}
}

int main() {
	eratosthenes(MAX);
}
