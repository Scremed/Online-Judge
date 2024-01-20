#include <stdio.h>

long long sum(long long N, long long total) {
	if(N<=0) return total;
	total+=N;
	N--;
	sum(N, total);
}

long long recursiveSum(long long D, long long N, long long totalsum) {
	if(D<=0) return totalsum;
	totalsum = sum(N, 0);
	N = totalsum;
	D--;
	recursiveSum(D, N, totalsum);
}

int main() {
	long long D, N;
	scanf("%lld %lld", &D, &N);
	
	long long totalsum = 0;
	totalsum = recursiveSum(D, N, totalsum);
	printf("%lld\n", totalsum);
}
