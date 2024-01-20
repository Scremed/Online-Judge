#include <stdio.h>

int binarySearch(int l, int r, long long M) {
    while (l <= r) {
        int mid = (l + r) / 2;
        double sum = 1.0/6 * mid * (mid + 1) * (2 * mid + 1);
        
        if (sum < M) {
            l = mid + 1;
        } else {
            r = mid - 1;
        }
    }
    
    return l;
}

int main() {
    int T;
    scanf("%d", &T);

    for (int i = 1; i <= T; i++) {
        unsigned long long M;
        scanf("%llu", &M);

        int result = binarySearch(0, 1e7, M);

        printf("Case #%d: %d\n", i, result);
    }

    return 0;
}
