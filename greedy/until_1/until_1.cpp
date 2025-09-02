#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

int main() {
	int n, k, result = 0;
	cin >> n >> k;
	while (n >= k) {
		while (n % k != 0) {
			n -= 1;
			result += 1;
		}
		n /= k;
		result += 1;
	}

	while (n > 1) {
		n -= 1;
		result += 1;
	}
	cout << result;
}







