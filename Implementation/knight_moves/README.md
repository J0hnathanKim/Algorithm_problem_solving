# Knight Moves Counter

This program calculates the number of valid moves a knight can make on a standard **8x8 chessboard** from a given starting position.

## 📌 Problem Description
- Input is given in standard chess notation (e.g., `a1`, `c5`, `h8`).
- The knight has **8 possible movement patterns**:
  - (x + 2, y + 1)
  - (x + 2, y - 1)
  - (x - 2, y + 1)
  - (x - 2, y - 1)
  - (x + 1, y + 2)
  - (x + 1, y - 2)
  - (x - 1, y + 2)
  - (x - 1, y - 2)
- The program checks how many of these moves stay inside the board boundaries (1 ≤ x,y ≤ 8).

## 🛠️ Implementation Details
1. Convert input (e.g., `"a1"`) into numeric coordinates:
   - `'a'` → column 1, `'b'` → column 2, …, `'h'` → column 8.
   - `'1'` → row 1, `'8'` → row 8.
2. Store knight moves in two arrays `dx` and `dy`.
3. Iterate over all possible moves, and check whether the resulting position is valid.
4. Count the number of valid moves and print the result.

## 🚀 Example

### Input
a1

### Output
2
