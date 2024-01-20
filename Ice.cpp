#include <stdio.h>

int main() {
    FILE *fp = fopen("testdata.txt", "r");
    if (fp == NULL) {
        printf("Error opening input file");
        return 1;
    }

    int T;
    fscanf(fp, "%d", &T);

    for (int i = 1; i <= T; i++) {
        int N;
        fscanf(fp, "%d", &N);

        if (N <= 0) {
            printf("Invalid input for case #%d\n", i);
            continue;
        }

        int X[N];

        int perimeter = 0;
        int area = 0;

        for (int j = 0; j < N; j++) {
            fscanf(fp, "%d", &X[j]);
        }

        for (int j = 0; j < N; j++) {
            // Perimeter calculation

            // Left side
			if (j == 0) {
			    perimeter += X[j];
			} else {
			    perimeter += (X[j] > X[j - 1]) ? (X[j] - X[j - 1]) : 0;
			}
			
			// Right side
			if (j == N - 1) {
			    perimeter += X[j];
			} else {
			    perimeter += (X[j] > X[j + 1]) ? (X[j] - X[j + 1]) : 0;
			}

            // Top and bottom
            perimeter += 2;

            // Area calculation
            area += X[j];
        }

        printf("Case #%d: %d %d\n", i, perimeter*2, area*4);

    }

    fclose(fp);
    return 0;
}

