#include <stdio.h>

void swap(int *a, int *b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}

void removeNum(int n[], int *N, int m) {
	for(int i = 0; i < *N; i++) {
		if(n[i] == m) {
			n[i] = n[*N - 1];
			(*N)--;
			i--;
		}
	}
}

int partition(int n[], int left, int right) {
	int pivot = n[right];
	int i = left-1;
	
	for(int j = left; j < right; j++) {
		if(n[j] < pivot) {
			i++;
			swap(&n[i], &n[j]);
		}
	}
	
	i++;
	swap(&n[i], &n[right]);
	return i;
}

void quicksort(int n[], int left, int right) {
	if(left >= right) return;
	
	int pIndex = partition(n, left, right);
	quicksort(n, left, pIndex-1);
	quicksort(n, pIndex+1, right);
}

int main() {
	int N, M;
	scanf("%d %d", &N, &M);
	
	int n[N];
	for(int i = 0; i < N; i++) {
		scanf("%d", &n[i]);
	}
	
	quicksort(n, 0, N-1);
	for(int i = 0; i < M; i++) {
		int m;
		scanf("%d", &m);
		removeNum(n, &N, m);
	}
	
	if(N==0) {
		printf("Maximum number is -1\n");
		return 0;
	}
	int max = n[0];
	for(int i = 0; i < N; i++) {
		if(max < n[i]) {
			max = n[i];
		}
	}
	
	printf("Maximum number is %d\n", max);
	
	return 0;
}
