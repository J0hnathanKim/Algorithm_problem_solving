#include <iostream>
using namespace std;

bool has3(int x) {
    if (x == 0) return false;
    while (x > 0) {
        if (x % 10 == 3) return true;
        x /= 10;
    }
    return false;
}

int main() {
    int h;
    cin >> h;
    int count = 0;

    for (int i = 0; i <= h; i++) {
        for (int j = 0; j < 60; j++) {
            for (int k = 0; k < 60; k++) {
                if (has3(i) || has3(j) || has3(k)) {
                    count++;
                }
            }
        }
    }

    cout << count << "\n";
    return 0;
}
