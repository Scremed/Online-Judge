#include <stdio.h>

int monopoly_Rules(long long square);
int end_Square(long long square);

int main() {
    int turns;
	int square = 0;

    scanf("%d", &turns);

        int rolls[turns];
        for (int i = 0; i < turns; i++) {
            scanf("%d", &rolls[i]);

            if (rolls[i] >= 2 && rolls[i] <= 12) {
                square += rolls[i];
                square = monopoly_Rules(square);
        	}
    	}
        printf("%d\n", square);

    return 0;
}

int monopoly_Rules(long long square) {
    if (square == 30) {
        return 10;
    }
    if (square == 12) {
        return 28;
    }
    if (square == 35) {
        return 7;
    }
    if (square >= 40) {
        square -= 40;
    }
    return square;
}
