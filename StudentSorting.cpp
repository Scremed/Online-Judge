#include <stdio.h>
#include <stdbool.h>
#include <string.h>

void swap(long* x, long* y, char xstr[], char ystr[]) {
    long temp = *x;
    *x = *y;
    *y = temp;

    char tempStr[25];
    strcpy(tempStr, xstr);
    strcpy(xstr, ystr);
    strcpy(ystr, tempStr);
}

void bubblesort(int N, long num[], char str[][25]) {
    bool swapped;
    for (int i = 0; i < N - 1; i++) {
        swapped = false;
        for (int j = 0; j < N - i - 1; j++) {
            if (num[j] > num[j + 1]) {
                // Swap both num and str arrays
                swap(&num[j], &num[j + 1], str[j], str[j + 1]);
                swapped = true;
            }
        }
        if (swapped == false)
            break;
    }
}

int main() {
    FILE *fp = fopen("testdata.in", "r");

    int N; // number of students
    fscanf(fp, "%d\n", &N);

    long num[N];
    char str[N][25];
    for (int i = 0; i < N; i++) {
        fscanf(fp, "%ld %20[^\n]", &num[i], str[i]);
    }
    fclose(fp);

    // Use the original arrays for sorting
    bubblesort(N, num, str);

    for (int i = 0; i < N; i++) {
        printf("%ld %s\n", num[i], str[i]);
    }

    return 0;
}


