#include <stdio.h>


int main() {
	int T, N;
	scanf("%d", &T);

	for(int i = 1; i <= T; i++){
		int N;
		scanf("%d", &N);
		
		printf("Case #%d:\n", i);
		
		for (int i = 0; i < N; i++) {
			for (int j = 0; j < N; j++) {
				if(i+j < N-1) {
			        printf(" ");	
				} else {
		    	if ((i+j) % 2 == 0){
		    		printf("*");
				} else {
		            printf("#");
		        	}
				}
			}
			printf("\n");
		}
	}
}
