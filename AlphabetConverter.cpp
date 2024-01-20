#include <stdio.h>
#include <string.h>

void changeAtoB(char X[], char A, char B, int used[]) {
    int len = strlen(X);

    for (int i = 0; i < len; i++) {
        if (X[i] == A) {
            X[i] = B;
        }
    }
}

int countB(char X[], char B) {
    int len = strlen(X);
    int count = 0;

    for (int i = 0; i < len; i++) {
        if (X[i] == B) {
            count++;
        }
    }

    return count;
}

void bubbleSort(char arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Swap arr[j] and arr[j + 1]
                char temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    FILE* fp = fopen("testdata.txt", "r");

    int T;
    fscanf(fp, "%d\n", &T);

    for (int i = 0; i < T; i++) {
        char X[105];
        fscanf(fp, "%s", X);

        int N; // processes
        fscanf(fp, "%d", &N); fgetc(fp);
		
		char A[N], B[N];// init char, change char
        int used[26] = {0}, count = 0;
        for (int j = 0; j < N; j++) {
            fscanf(fp, "%c %c\n", &A[j], &B[j]);
            used[A[j]-'A']++;
            if (used[A[j] - 'A'] <= 1) {
                changeAtoB(X, A[j], B[j]);
            }
        }

        // Sorting B alphabetically
        char uniqueBs[26];
        int uniqueCount = 0;
        for (int k = 0; k < 26; k++) {
            if (used[k] == 1) {
                uniqueBs[uniqueCount++] = (char)(k + 'A');
            }
        }
        
        bubbleSort(B, uniqueCount);

        // Printing B and counts alphabetically
        for (int k = 0; k < uniqueCount; k++) {
        	if(countB(X, B[k]) > 0) {
            	printf("%c %d\n", B[k], countB(X, B[k]));
        	}
        }
    }

    fclose(fp);
    return 0;
}

