#include <stdio.h>

int main() {
	int T;
	scanf("%d", &T);
	
	for(int i = 0; i < T; i++) {
		int N;
		scanf("%d", &N);
		unsigned long long n[N], total = 0;
		
		for(int j = 0; j < N; j++) {
			scanf("%llu", &n[j]); getchar();
			total = total + n[j];
		}
		printf("Case #%d: %llu\n", i + 1, total);
	}

}
