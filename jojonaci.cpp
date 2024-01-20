#include <stdio.h>

long long jojonaci(int N, long long X, long long Y) {
	if(N == 0) {
		return X;
	} else if(N == 1) {
		return Y;
	}
	
	return (jojonaci(N-1, X, Y) - jojonaci(N-2, X, Y));
}

int main() {
	int T;
	scanf("%d", &T);
	
	for(int i = 0; i < T; i++) {
		int N;
		long long X, Y;
		scanf("%d %lld %lld", &N, &X, &Y);
		
		long long result = jojonaci(N, X, Y);
		
		printf("Case #%d: %lld\n", i+1, result);
	}
}
