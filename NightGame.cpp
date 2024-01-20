#include <stdio.h>

int main() {
	int T; //testcase
	scanf("%d", &T);
	
	for(int i = 0; i < T; i++) {
		int N;
		scanf("%d", &N);
		
		long long n[N] = {0};
		for(int j = 0; j < N; j++) {
			scanf("%lld", &n[j]);
		}
		
		printf("Case #%d: ", i + 1);
		for(int j = N-1; j >= 0; j--) {
			if(j > 0) {
				printf("%lld ", n[j]);
			} else {
				printf("%lld\n", n[j]);
			}
		}
	}
}
