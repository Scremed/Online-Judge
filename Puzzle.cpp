#include <stdio.h>

int check(int N, int n[105][105]){
	for(int i = 1; i <= N; i++) { // check for column 
		int col[101] = {0}; 
		for(int j = 1; j <= N; j++) {
			if(col[n[i][j]] == 1) { //if there are same value, return false
				return 0;
			}
			col[n[i][j]] = 1;
		}
	}
	
	for(int i = 1; i <= N; i++) { // check for row 
		int row[101] = {0}; 
		for(int j = 1; j <= N; j++) {
			if(row[n[j][i]] == 1) { //if there are same value, return false
				return 0;
			}
			row[n[j][i]] = 1;
		}
	}
	return 1; //if there's no same value, return true
}

int main() {
	int N; //N * N
	scanf("%d", &N);
	
	int n[105][105];
	int team[N+1];
	for(int i = 1; i <= N; i++) {
		for(int j = 1; j <= N; j++) {
			scanf(" %d", &n[i][j]);
		}
	}
	
	int isUnique = check(N, n);
	if(isUnique) {
		printf("Yay\n");
	} else {
		printf("Nay\n");
	}
	return 0;
}
