#include <stdio.h>

int main() {
    int N, M;
	scanf("%d %d", &N, &M);
    char n[N];
    int m[M];
    scanf("%s", n);
    
    bool change[N];
    for (int i = 0; i < N; i++) {
        change[i] = false;
    }

    for (int i = 0; i < M; i++) {
        scanf("%d", &m[i]);
    }

    for (int i = 0; i < N; i++) {
        int count = 0;
        for (int j = 0; j < M; j++) {
            if (m[j] == i) {
                count++;
            }
        }

        if (count % 2 == 1) {
            if (n[i] >= 'a' && n[i] <= 'z') {
                printf("%c", n[i] - 32);  // Change to uppercase
            } else if (n[i] >= 'A' && n[i] <= 'Z') {
                printf("%c", n[i] + 32);  // Change to lowercase
            }
        } else {
            printf("%c", n[i]);
        }
    }

    printf("\n");

    return 0;
}

