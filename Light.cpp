#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);

    for (int i = 0; i < T; i++) {
        int N, M, Q;
        scanf("%d %d %d", &N, &M, &Q);

        int pattern[N][M];
        for (int j = 0; j < N; j++) {
            for (int k = 0; k < M; k++) {
                scanf(" %d", &pattern[j][k]);
            }
        }

        int visit[Q];
        for (int j = 0; j < Q; j++) {
            scanf("%d", &visit[j]);
        }

        int room[55];
        for (int j = 0; j < M; j++) {
            room[j] = 0;
        }

        for (int j = 0; j < Q; j++) {
            int visitIdx = visit[j] - 1;

            for (int k = 0; k < M; k++) {
                room[k] ^= pattern[visitIdx][k];
            }
        }

        printf("Case #%d:\n", i + 1);

        for (int j = 0; j < M; j++) {
            if (room[j] == 1) {
                printf("YES\n");
            } else {
                printf("NO\n");
            }
        }
    }

    return 0;
}

