#include <stdio.h>

int moveX[] = {-2, -1, 1, 2, 2, 1, -1, -2};
int moveY[] = {-1, -2, -2, -1, 1, 2, 2, 1};

char board[8][8];
int min = 100;

void horse(int x1, int y1, int x2, int y2, int count) {
    if (x1 >= 0 && y1 >= 0 && x1 <= 7 && y1 <= 7) { // In the range
        if (x1 == x2 && y1 == y2) { // Horse is at the correct position
            if (count < min) { // Finding the minimum count
                min = count;
            }
            return; // Added return to stop further exploration when the target is reached
        }

        if (count < min) { // Check to avoid unnecessary exploration if count exceeds the current minimum
            for (int i = 0; i < 8; i++) { // Recursively move the horse
                horse(x1 + moveX[i], y1 + moveY[i], x2, y2, count + 1);
            }
        }
    }
}

int main() {
    int t;
    scanf("%d", &t);

    for (int tc = 1; tc <= t; tc++) {
        char knight1[3], knight2[3];
        scanf("%s %s", knight1, knight2);

        int x1 = 8 - (knight1[1] - '0');
        int y1 = knight1[0] - 'A';
        int x2 = 8 - (knight2[1] - '0');
        int y2 = knight2[0] - 'A';

        min = 100;
        horse(x1, y1, x2, y2, 0);

        printf("Case #%d: %d\n", tc, min);
    }

    return 0;
}

