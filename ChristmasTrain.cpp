#include <stdio.h>

long long t = 0;

void swap(int *a, int *b, int X) {
	int temp = *a;
	*a = *b;
	*b = temp;
	t += X;
}

void bubbleswap(int n[], int N, int X) {
	bool swapped;
	for(int i = 0; i < N-1; i++) {
		swapped = false;
		for(int j = 0; j < N-i-1; j++) {
			if(n[j] > n[j+1]) {
				swap(&n[j], &n[j+1], X);
				swapped = true;
			}
		}
		
		if(swapped == false) {
			break;
		}
	}
}

int main() {
	int T;
	scanf("%d", &T);
	
	for(int i = 0; i < T; i++) {
		t = 0;
		int N, X; 
		scanf("%d %d", &N, &X);
		
		int n[N];
		for(int j = 0; j < N; j++) {
			scanf("%d", &n[j]);
		}
		
		bubbleswap(n, N, X);
		
		printf("Case #%d: %lld\n", i+1, t);
	}
}
