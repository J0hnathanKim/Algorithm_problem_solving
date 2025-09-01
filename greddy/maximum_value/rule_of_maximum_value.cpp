#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include<algorithm>
using namespace std;

int main() {
	int n, m, k;
	cin >> n >> m >> k;
	int* arr = new int[n];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	sort(arr, arr + n);
	int first = arr[n - 1];
	int second = arr[n - 2];

	int result = 0;
	while (1) {
		for (int i = 0; i < k; i++) {
			if (m == 0) break;
			result += first;
			m -= 1;
		}
		if (m == 0) break;
		result += second;
		m -= 1;
	}
	cout << result;
}
