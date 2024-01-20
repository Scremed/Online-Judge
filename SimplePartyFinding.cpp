#include <stdio.h>

void swap(int *x, int *y) {
	int temp = *x;
	*x = *y;
	*y = temp;
}

void sort(int N, int MMR[]) {
	for(int i = 0; i < N; i++) {
		int swapped = 0;
		for(int j = 0; j < N-i-1; j++) {
			if(MMR[j] > MMR[j+1]) {
				swap(&MMR[j], &MMR[j+1]);
				swapped = 1;
			}
		}
		
		if(swapped == 0) {
			break;
		}
	}
}

int match(int N, int MMR[], int F) {
	int notfound = -1;
	for(int i = 0; i < N; i++) {
		if(F == MMR[i]) {
			if(i < N-1) {
				return MMR[i+1];
			} else if(i == N-1) {
				return MMR[i-1];
			}
		}
	}
	
	return notfound;
}

int main() {
	int K; //testcase
	scanf("%d", &K);

	for(int i = 0; i < K; i++) {
		int N; //total players
		scanf("%d", &N);
		
		int MMR[N]={};
		for(int j = 0; j < N; j++) {
			scanf("%d", &MMR[j]);
		}
		
		int F;
		scanf("%d", &F);
		
		sort(N, MMR);
		int result = match(N, MMR, F);
		
		if(result != -1) {
			if(result > F) {
				printf("CASE #%d: %d %d\n", i+1, F, result);
			} else {
				printf("CASE #%d: %d %d\n", i+1, result, F);
			}
		} else {
			printf("CASE #%d: -1 -1\n", i+1);
		}
	}
}
