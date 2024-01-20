#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define N 8

// Function to check if the given position is valid on the chessboard
bool isValid(int x, int y) {
    return (x >= 0 && y >= 0 && x < N && y < N);
}

// Recursive function to find a meeting point for white and black knights
bool findMeetingPoint(int x1, int y1, int x2, int y2, int m) {
    // Base case: if maximum allowed moves are reached
    if (m == 0) {
        return (x1 == x2 && y1 == y2);
    }

    // Possible moves for a knight (L-shaped pattern)
    int dx[] = {-2, -1, 1, 2, -2, -1, 1, 2};
    int dy[] = {-1, -2, -2, -1, 1, 2, 2, 1};

    // Try all possible moves for both knights
    for (int i = 0; i < 8; i++) {
        int new_x1 = x1 + dx[i];
        int new_y1 = y1 + dy[i];

        if (isValid(new_x1, new_y1)) {
            for (int j = 0; j < 8; j++) {
                int new_x2 = x2 + dx[j];
                int new_y2 = y2 + dy[j];

                if (isValid(new_x2, new_y2)) {
                    if (findMeetingPoint(new_x1, new_y1, new_x2, new_y2, m - 1)) {
                        printf("White Knight: %c%d\n", 'A' + new_y1, new_x1 + 1);
                        printf("Black Knight: %c%d\n", 'A' + new_y2, new_x2 + 1);
                        return true;
                    }
                }
            }
        }
    }

    return false;
}

int main() {
    int m;
    printf("Enter the maximum number of moves: ");
    scanf("%d", &m);

    // Starting positions for white and black knights
    int white_x = 0, white_y = 0; // A1
    int black_x = 7, black_y = 7; // H8

    if (findMeetingPoint(white_x, white_y, black_x, black_y, m)) {
        printf("Meeting point found!\n");
    } else {
        printf("Meeting point not found within %d moves.\n", m);
    }

    return 0;
}

