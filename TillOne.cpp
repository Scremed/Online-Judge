#include <stdio.h>

int tillone(long long N) {
	if(N == 1) {
		return 1;
	}
	
	if(N % 2 == 1) {
		return tillone(N-1) + tillone(N+1);
	} else {
		return tillone(N/2);
	}
}

int main() {
	int T;
	scanf("%d", &T);
	
	for(int i = 0; i < T; i++) {
		long long N;
		scanf("%lld", &N);
		
		long long result = tillone(N);
		
		printf("Case #%d: %lld\n", i+1, result);
	}
}
