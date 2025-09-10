#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

int main()
{
	int count = 0;
	int N;

	cin >> N;
	for (int i = 0; i <= N; i++) {
		for (int j = 0; j <= 59; j++) {
			for (int k = 0; k <= 59; k++) {
				if (k % 10 == 3 || k / 10 == 3 || j % 10 == 3 || j / 10 == 3 || i % 10 == 3 || i / 10 == 3) count += 1;
			}
		}
	}
	cout << count;
}
