#include <stdio.h>

int main() {
    char x1, x2, x3;

    scanf("%c %c %c", &x1, &x2, &x3);

    int order[3];

    if (x1 <= x2 && x1 <= x3) {
        order[0] = 1;
        if (x2 <= x3) {
            order[1] = 2;
            order[2] = 3;
        } else {
            order[1] = 3;
            order[2] = 2;
        }
    } else if (x2 <= x1 && x2 <= x3) {
        order[0] = 2;
        if (x1 <= x3) {
            order[1] = 1;
            order[2] = 3;
        } else {
            order[1] = 3;
            order[2] = 1;
        }
    } else {
        order[0] = 3;
        if (x1 <= x2) {
            order[1] = 1;
            order[2] = 2;
        } else {
            order[1] = 2;
            order[2] = 1;
        }
    }

    printf("%d %d %d\n", order[0], order[1], order[2]);

    return 0;
}

