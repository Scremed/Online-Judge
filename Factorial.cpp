#include <stdio.h>

long long factorial(int A) {
	if(A == 0 || A == 1) {
		return 1;
	}
	
	return (A * factorial(A-1)) % 1000000007;
}

int main() {
	int T; 
	scanf("%d", &T);
	
	for(int i = 0; i < T; i++) {
		int N;
		scanf("%d", &N);
		
		long long result = 1;
		for(int j = 0; j < N; j++) {
			long long A = 0;
			scanf("%lld", &A);
			
			long long f = factorial(A);
			result = (result * f) % 1000000007;
		}
		
		printf("Case #%d: %lld\n", i+1, result);
	}
}
