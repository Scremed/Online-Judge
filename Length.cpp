#include <stdio.h>

int main() {
	int T;
	scanf("%d", &T);
	
	for(int i = 0; i < T; i++) {
		long long N;
		scanf("%lld", &N);
		
		int count = 0;
		while(N > 0) {
			N = N / 10;
			count++;
		}
		
		printf("Case #%d: %d\n", i+1, count);
	}
}
