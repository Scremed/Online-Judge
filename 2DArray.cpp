#include <stdio.h>

int main() {
	int N,M,Q; //queries
	scanf("%d %d %d", &N, &M, &Q);
	
	int x, y, a; //array of [x][y], number of queries
	int arr[200][200];
	for(int i = 0; i < Q; i++) {
		scanf("%d %d %d", &x, &y, &a);
		arr[x][y] = a;
	}
	
	for(int j = 0; j < N; j++) {
		for(int k = 0; k < M; k++) {
			if(k < M - 1) {
				printf("%d ", arr[j][k]);
			} else {
				printf("%d", arr[j][k]);
			}
		}
		printf("\n");
	}
	return 0;
}
