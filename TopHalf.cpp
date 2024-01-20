#include <stdio.h>

void swap(long long *x, long long *y) {
	long long temp = *x;
	*x = *y;
	*y = temp;
}

int partition(long long n[], int left, int right) {
	long long pivot = n[right];
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

void quicksort(long long n[], int left, int right) {
	if(left >= right) return;
	
	int pIndex = partition(n, left, right);
	quicksort(n, left, pIndex-1);
	quicksort(n, pIndex+1, right);
}

int main() {
	int N;
	scanf("%d", &N);
	
	long long n[N];
	for(int i = 0; i < N; i++) {
		scanf(" %lld", &n[i]);
	}
	
	quicksort(n, 0, N-1);
	
	int mid = N/2;
	for(int i = mid+1; i < N; i++) {
		if(i < N-1) {
			printf("%lld ", n[i]);
		} else {
			printf("%lld\n", n[i]);
		}
	}
}
