#include <stdio.h>

int isValid(long long A[], int N, long long M, int length) {
    long long currentSum = 0;
    for (int i = 0; i < length; i++) {
        currentSum += A[i];
    }

    if (currentSum <= M) {
        return 1;
    }

    for (int i = length; i < N; i++) {
        currentSum += A[i] - A[i - length];
        if (currentSum <= M) {
            return 1;
        }
    }

    return 0;
}

int binarySearch(long long A[], int N, long long M) {
    int low = 1, high = N, result = -1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (isValid(A, N, M, mid)) {
            result = mid;
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    return result;
}

int main() {
    int T;
    scanf("%d", &T);

    for (int i = 0; i < T; i++) {
        int N;
        long long M;
        scanf("%d %lld", &N, &M);

        long long A[N];
        for (int j = 0; j < N; j++) {
            scanf("%lld", &A[j]);
        }

        int segment = binarySearch(A, N, M);

        if (segment != -1) {
            printf("Case #%d: %d\n", i + 1, segment);
        } else {
            printf("Case #%d: -1\n", i + 1);
        }
    }

    return 0;
}

