#include <stdio.h>

int main() {
	int N, Q; //N amount of items, Q times update the price
	scanf("%d", &N);
	int n[N]; //n[N] initial price for each items
	
	for(int i = 0; i < N; i++) {
		scanf("%d", &n[i]);
	}
	
	scanf("%d",&Q);
	
	int A,B;
	for(int i = 0; i < Q; i++) {
		scanf("%d %d", &A, &B);
		
		n[A-1] = B;
		
		printf("Case #%d: ", i+1);
		for(int j = 0; j < N; j++) {
			if(j < N-1) {
				printf("%d ", n[j]);
			} else {
				printf("%d\n", n[j]);
			}
		}
	}
	return 0;
}
