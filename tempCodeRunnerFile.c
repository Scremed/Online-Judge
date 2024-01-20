#include <stdio.h>

long long revSum(long long N) {
    long long sum = 0;
    while(N > 0) {
        sum = sum*10 + N%10;
        N /= 10;
    }

    return sum;
}

int main() {
    int T;
    scanf("%d", &T);

    for(int i = 0; i < T; i++) {
        long long N;
        scanf("%lld", &N);

        long long total = revSum(N) + N;
        printf("Case #%d: %lld\n", i+1, total);
    }
}