#include <stdio.h>

int main() {
	int T; //testcase
	scanf("%d", &T);
	
	int A[T];
	for(int i = 0; i < T; i++) {
		scanf(" %d", &A[i]);
	}
	
	int B[T];
	for(int i = 0; i < T; i++) {
		scanf(" %d", &B[i]);
	}
	
	int sort[T];
	for(int i = 0; i < T; i++) {
		sort[A[i]] = B[i];
	}
	
	for(int i = 0; i < T; i++) {
		if(i <= T-2) {
			printf("%d ", sort[i]);
		} else {
			printf("%d\n", sort[i]);
		}
	}
	
}
