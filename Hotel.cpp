#include <stdio.h>

int main() {
	int T;
	scanf("%d", &T);
	long long N[T];
	
	long long total = T;
	
	for(int i = 0; i < T; i++) {
		scanf("%lld", &N[i]);
	}
	
	for(int i = 0; i < T; i++) {
		for(int j = i+1; j < T; j++) {
			if(N[i] == N[j]) {
				total--;
				break;
			}
		}
	}
	
	printf("%lld\n", total);
}
