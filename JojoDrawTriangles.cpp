#include <stdio.h>

int main() {
	int T, X;
	scanf("%d", &T);
	
	for(int i = 0; i < T; i++) {
		scanf("%d", &X);
		int x = X;
		
		for(int j = 1; j <= X; j++) {
			for(int k = 1; k <= x - 1; k++) {
				printf(" ");
			}
			
			for(int k = 1; k <= (2*j)-1; k++) {
				printf("*");
			}
			x--;
			
			printf("\n");
		}
	}
	
	return 0;
}
