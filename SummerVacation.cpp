#include <stdio.h>

int main() {
	int T; //test case
	scanf("%d", &T);
	
	for(int i = 0; i < T; i++) {
		int N;
		scanf("%d", &N);
		
		int A[N];
		for(int j = 0; j < N; j++) {
			scanf("%d", &A[j]);
		}
		
		int count = 0;
		int used[N] = {0};
		for(int j = 0; j < N; j++) {
			for(int k = j+1; k < N; k++) {
				int sum = A[j] + A[k];
				for (int l = 0; l < N; l++) {
                    if (!used[l] && l != j && l != k && A[l] == sum) {
                        count++;
                        used[l] = 1;
                    }
                }	
			}
		}
		
		printf("Case #%d: %d\n", i+1, count);
	}
}
