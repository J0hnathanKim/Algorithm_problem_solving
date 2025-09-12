#include <iostream>
using namespace std;

int main() {
    string s;
    cin >> s;   // Input position in chess notation (e.g., "a1")

    char ch = s[0];   // Extract column character ('a' ~ 'h')
    char num = s[1];  // Extract row character ('1' ~ '8')

    int x = ch - 'a' + 1;  // Convert column to number: 'a' → 1, 'b' → 2 ...
    int y = num - '0';     // Convert row character to integer: '1' → 1

    int count = 0;

    // Possible knight moves (dx, dy)
    int dx[8] = { 2, 2, -2, -2, 1, 1, -1, -1 };
    int dy[8] = { 1, -1, 1, -1, 2, -2, 2, -2 };

    for (int i = 0; i < 8; i++) {
        int nx = x + dx[i];
        int ny = y + dy[i];

        // Check if the new position is still within the chessboard (1 ≤ x,y ≤ 8)
        if (nx >= 1 && nx <= 8 && ny >= 1 && ny <= 8) {
            count++;
        }
    }

    cout << count << '\n';  // Print the number of valid knight moves
    return 0;
}
