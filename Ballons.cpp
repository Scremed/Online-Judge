#include <stdio.h>

int main() {
	long long N, P, count = 0;
	scanf("%lld %lld", &N, &P);
	
	long long b[N];
	for(int i = 0; i < N; i++) {
		scanf("%lld", &b[i]); getchar();
	}
	
	for(int i = 0; i < N; i++) {
		if(b[i] < P) {
			count++;
		}
	}
	
	printf("%lld\n", count);
	
	return 0;
}
