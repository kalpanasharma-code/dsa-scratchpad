#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int row, col;
    cout << "Enter bishop position (row col): ";
    cin >> row >> col;

    if (row < 1 || row > 8 || col < 1 || col > 8) {
        cout << "Invalid position";
        return 0;
    }

    int count =
        min(8 - row, 8 - col) +
        min(8 - row, col - 1) +
        min(row - 1, col - 1) +
        min(row - 1, 8 - col);

    cout << "Total possible moves of bishop: " << count;
    return 0;
}
//A bishop moves diagonally. From any position, it can move in four diagonal directions until it reaches the board edge. The number of moves in each direction is the minimum distance to the boundary, and summing all four gives the total moves.