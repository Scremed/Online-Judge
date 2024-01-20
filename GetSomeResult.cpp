#include <stdio.h>

void getMatrices(int N, int matrice1[51][51], int matrice2[51][51], int matrice3[51][51]) {
	for(int i = 0; i < N; i++) {
	    for(int j = 0; j < N; j++) {
	        matrice1[i][j] = 0;
	        matrice2[i][j] = 0;
	        matrice3[i][j] = 0;
	    }
	}
	
	for(int i = 0; i < N; i++) {
		for(int j = 0; j < N; j++) {
			scanf("%d", &matrice1[i][j]);
		}
	}
	getchar();
	for(int i = 0; i < N; i++) {
		for(int j = 0; j < N; j++) {
			scanf("%d", &matrice2[i][j]);
		}
	}
	getchar();
	for(int i = 0; i < N; i++) {
		for(int j = 0; j < N; j++) {
			scanf("%d", &matrice3[i][j]);
		}
	}
	getchar();
}

void calculate(int N, int matrice1[51][51], int matrice2[51][51], int result[51][51]) {
	for(int i = 0; i < N; i++) { //matrice1 row
		for(int j = 0; j < N; j++) { //matrice2 col
			result[i][j] = 0;
			for(int k = 0; k < N; k++) { // matrice1 col
				result[i][j] += matrice1[i][k] * matrice2[k][j];
			}
		}
	}
}

int main() {
	int T; //Testcase
	scanf("%d", &T);
	
	for(int i = 0; i < T; i++){
		int N; //matrices size
		scanf("%d", &N);
		
		int matrice1[51][51];
        int matrice2[51][51];
        int matrice3[51][51];
        int result1[51][51];
        int result2[51][51];
		
		getMatrices(N, matrice1, matrice2, matrice3);
		calculate(N, matrice1, matrice2, result1);
		calculate(N, result1, matrice3, result2);
		
		printf("Case #%d:\n", i+1);
		for(int j = 0; j < N; j++) {
			for(int k = 0; k < N; k++) {
				printf("%d", result2[j][k]);
				if(k < N - 1) {
					printf(" ");
				}
			}
			printf("\n");
		}
	}
	
	return 0;
}
