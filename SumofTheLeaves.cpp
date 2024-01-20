#include <stdio.h>

int sum = 0;
int depthSum(int A[], int N, int index) {
    if (index < N) {
    	sum += A[index];
    	
    	//recursively sum for left & right node
    	depthSum(A, N, 2*index+1);
    	depthSum(A, N, 2*index+2);
    	
    	if(2*index+1 >= N && 2*index+2 >= N) {
    		printf("%d\n", sum);
		}
		
		sum -= A[index];
	}
}

int main() {
	int T;
	scanf("%d", &T);
	
	for(int i = 0; i < T; i++) {
		int N;
		scanf("%d", &N);
		
		int A[N];
		for(int j = 0; j < N; j++) {
			scanf("%d", &A[j]);
		}
		
		int sum = 0;
		printf("Case #%d:\n", i+1);
		depthSum(A, N, 0);
	}
}
