#include <stdio.h>

int snadders_Rules(int square);

int main() {
    int turns;
	int square = 0;

    scanf("%d", &turns);

        int rolls[turns];
        for (int i = 0; i < turns; i++) {
            scanf("%d", &rolls[i]);

            if (rolls[i] >= 2 && rolls[i] <= 12) {
                square += rolls[i];
                square = snadders_Rules(square);
        	}
    	}
        printf("%d\n", square);

    return 0;
}

int snadders_Rules(int square) {
	//ladders
    if (square == 9) {
        return 21;
    }
    if (square == 33) {
        return 42;
    }
    if (square == 76) {
        return 92;
    }
    //snake
    if (square == 53) {
        return 37;
    }
    if (square == 80) {
        return 59;
    }
    if (square == 97) {
        return 88;
    }
    return square;
}
