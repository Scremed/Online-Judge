#include <stdio.h>

int main() {
	long long Q, N = 1;
	scanf("%lld", &Q);
	
	for(int i = 0; i < Q; i++) {
		N = (N*2)+1;
	}

	printf("%lld\n", N);
	
	return 0;
}
