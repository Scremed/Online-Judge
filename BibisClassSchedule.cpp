#include <stdio.h>

int main() {
	int T,N;
	scanf("%d", &T);
	
	for(int i = 0; i < T; i++) {
		scanf("%d", &N);
		
		long long X[N] = {0};
		for(int j = 0; j < N; j++) {
			scanf("%lld", &X[j]);
		}	
		
		long long min, num[N];
		for(int j = 0; j < N; j++) {
			for(int k = j+1; k < N; k++) {
				num[j] = X[k] - X[j];
				if(num[j] < 0) {
					num[j] *= -1;
				}
			}
			
			min = X[0];
			if(min > X[j]) {
				min = X[j];
			}
		}
		
		printf("Case #%d: %lld\n", i+1, min);
	}
	
	return 0;
}
