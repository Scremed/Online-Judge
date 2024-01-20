#include <stdio.h>

int main() {
	int T;
	scanf("%d", &T);
	
	for(int i = 0; i < T; i++){
		int X;
		scanf("%d", &X);
		int x[X][X];
		
		for(int k = 0; k < X; k++){
			for(int l = 0; l < X; l++){
				scanf("%d", &x[k][l]);
			}
		}
		
		int col[X];
		for(int l = 0; l < X; l++){
			col[l] = 0;
			for(int k = 0; k < X; k++){
				col[l] += x[k][l];
			}
		}
		
		
		printf("Case #%d: ", i + 1);
		for(int j = 0; j < X; j++) {
			printf("%d", col[j]);
			if(j != X-1) {
				printf(" ");
			}
		}
		
		printf("\n");
	}
	
	return 0;
}
