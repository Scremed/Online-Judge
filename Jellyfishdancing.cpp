#include <stdio.h>

int main() {
	int N, Q;
	
	scanf("%d", &N);
	int  views[N];
	for(int i=0; i<N; i++) {
		scanf("%d", &views[i]);
	}
	
	scanf("%d", &Q);
	int A[Q],B[Q];
	for(int j=0; j<Q; j++) {
		scanf("%d %d", &A[j], &B[j]);
	}
	
	for(int k=0;k<Q;k++) {
		int total_views=0;
		for(int l = A[k]-1 ;l<=B[k]-1;l++) {
			total_views += views[l];
		}
		printf("Case #%d: %d\n", k+1, total_views);
	}

	return 0;
}
