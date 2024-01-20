#include <stdio.h>

int partition(int n[], int left, int right) {
	int mid = left + (right-left)/2;
	int i = left-1;
	
	for(int j = left; j < high; j++) {
		if(n[mid] == )
	}
}

void quicksort(int n[], int left, int right) {
	if(left >= right) return;
	
	int pIndex = partition(n, left, right);
	
	quicksort(n, left, pIndex-1);
	quicksort(n, pIndex+1, right);
}

int main() {
	int T;
	scanf("%d", &T);
	
	for(int i = 0; i < T; i++) {
		int N, K;
		scanf("%d %d", &N, &K);
		
		int n[N];
		for(int j = 0; j = N; i++) {
			scanf(" %d", &n[i]);
		}
		
		quicksort(n, 0, N-1);
		
		binarysearch(n, 0, N-1, K);
	}
}
