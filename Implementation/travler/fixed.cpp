#include <iostream>
using namespace std;

int main() {
    int row = 1, col = 1;
    int count;
    cin >> count;

    // Ensure count doesn't exceed the number of possible valid moves
    // count = min(count, 4); // The max number of valid moves is 4 on a 5x5 grid //chatgpt wrote this part but I'm still not sure this makes sense.

    while (count > 0) {
        char direction;
        cin >> direction;

        switch (direction) {
            case 'R':
                if (col < 5) {
                    col++;
                    count--;
                }
                break;
            case 'D':
                if (row < 5) {
                    row++;
                    count--;
                }
                break;
            case 'U':
                if (row > 1) {
                    row--;
                    count--;
                }
                break;
            case 'L':
                if (col > 1) {
                    col--;
                    count--;
                }
                break;
            default:
                // Invalid input (not 'R', 'L', 'U', or 'D')
                break;
        }
    }

    cout << row << " " << col << endl;
}
