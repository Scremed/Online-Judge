#include <stdio.h>

int main() {
	int N;
	scanf("%d", &N);
	
	int A[N];
	for(int i = 0; i < N; i++) {
		scanf("%d ", &A[i]);
	}
	for(int i = 0; i < N; i++) {
		printf("%d ", A[i]);
	}
	
//	int count = 0, temp, n = 0, num[1000];
//	for(int i = 0; i < N; i++) {
//		int a = A[i+1];
//		
//		if(A[0] == 1) {
//			count = 1;
//		}
//		
//		while(a == (A[i] + 1)) {
//			temp = ++count; 
//		}
//
//		count = 0;		
//		if(count == 0) {
//			n++;
//		}
//		num[n] = temp;
//	}
//	
//	for(int i = 0; i < n; i++) {
//		printf("%d ", num[i]);
//	}
}
