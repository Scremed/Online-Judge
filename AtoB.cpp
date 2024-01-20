#include <stdio.h>

int atob(int A, int B) {
	if(A == B) {
		return B;	
	} else if(A == 1) {
		return A;
	} else if(A % 2 == 0) {
		return atob(A/2, B);
	} else {
		return atob((A*3)+1, B);
	}
}

int main() {
	int T;
	scanf("%d", &T);
	
	for(int i = 0; i < T; i++) {
		int A, B;
		scanf("%d %d", &A, &B);
		
		int newA = atob(A, B);
		
		if(newA == B) {
			printf("Case #%d: YES\n", i+1);
		} else {
			printf("Case #%d: NO\n", i+1);	
		}
	}
}
