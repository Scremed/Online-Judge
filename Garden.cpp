#include <stdio.h>

int main() {
	int X,Y; // row & column
	scanf("%d %d", &X, &Y);
	
	int arr[X+1][Y+1];
	for(int i = 1; i <= X; i++) {
		for(int j = 1;j <= Y; j++) {
			scanf("%d", &arr[i][j]);
		}
	}
	
	int T; //number of changes
	scanf(" %d", &T); getchar();
	for(int i = 0; i < T; i++) {
		int a,b,c;
		scanf("%d %d %d", &a, &b, &c); getchar();
		
		for(int j = 1; j <= X; j++) {
			for(int k = 1;k <= Y; k++) {
				if(j == a && k == b){
					arr[j][k] = c;
				}
			}
		}
	}
	
	for(int i = 1; i <= X; i++) {
		for(int j = 1;j <= Y; j++) {
			if(j < Y) {
				printf("%d ", arr[i][j]);
			} else {
				printf("%d", arr[i][j]);
			}
		}
		printf("\n");
	}
	
	return 0;
}
