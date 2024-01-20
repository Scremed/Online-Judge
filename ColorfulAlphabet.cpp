#include <stdio.h>
#include <string.h>

int main() {
	int T;
	scanf("%d", &T);
	
	for(int i = 0; i < T; i++) {
		int N;
		scanf("%d", &N);
		
		char sorted[N+1];
		
		for(int j = 0; j < N ; j++) {
        	sorted[j] = 'a' + j ;
		}
		
		sorted[N] = '\0';
		
        printf("Case #%d: %s\n", i + 1, sorted);
	}
	
	return 0;	
}
