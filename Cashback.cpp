#include <stdio.h>

int main() {
	int T;
	scanf("%d", &T);
	
	for(int i=0; i<T; i++) {
		int A,B;
		char C[6]= "Go-Jo";
		char D[7]= "Bi-Pay";
		scanf("%d %d", &A, &B);
		
		if(A<B) {
			printf("Case #%d: %s\n", i+1, D);
		} else {
			printf("Case #%d: %s\n", i+1, C);
		}
	}
}
