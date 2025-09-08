#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <set>
using namespace std;

int main()
{
	int x = 1;
	int y = 1;
	char d;
	int count = 0;
	cin >> count;
	while (count > 0) {
		cin >> d;
		if (d == 'R' && x < 5) {
			x += 1;
			count--;
		}
		else if (d == 'D' && y < 5) { 
			y += 1;
			count--;
		}
		else if (d == 'U' && y > 1) { 
			y -= 1;
			count--;
		}
		else if (d == 'L' && x > 1) { 
			x -= 1;
			count--;
		}
		else continue;
	}
	cout <<y<<" "<<x;
}
