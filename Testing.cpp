//#include <stdio.h>
//
//#define MOD 1000000000
//
//long long dp[100001];
//
//void calculateAsterisks() {
//    dp[0] = 0;
//    dp[1] = 1;
//
//    for (int i = 2; i <= 100000; i++) {
//        dp[i] = (dp[i - 1] * 2 + i) % MOD;
//    }
//}
//
//long long fraktal_A(int x) {
//    return dp[x];
//}
//
//int main() {
//    int X;
//    scanf("%d", &X);
//
//    calculateAsterisks();
//
//    long long result = fraktal_A(X);
//    printf("%lld\n", result);
//
//    return 0;
//}


#include <stdio.h>

long long dp[81];

void calculateAsterisks() {
    dp[0] = 0;
    dp[1] = 1;

    for (int i = 2; i <= 80; i++) {
        dp[i] = (dp[i - 1] * 2LL + i);  // Use long long for intermediate calculation
    }
}

long long fraktal_A(int x) {
    return dp[x];
}

int main() {
    int X;
    scanf("%d", &X);

    calculateAsterisks();

    long long result = fraktal_A(X);
    printf("%lld\n", result);

    return 0;
}


