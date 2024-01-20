#include <stdio.h>

int main() {
	int N; //size
	scanf("%d", &N); getchar();
	
	char str[105][105];
	
	for(int i = 0; i < N; i++) {
		for(int j = 0; j < N; j++) {
			scanf("%c", &str[i][j]);
		}
		getchar();
	}
	
	for(int i = N-1; i >= 0; i--) {
		for(int j = N-1; j >= 0; j--) {
			printf("%c", str[i][j]);
		}
		printf("\n");
	}
	
	
	return 0;
}
