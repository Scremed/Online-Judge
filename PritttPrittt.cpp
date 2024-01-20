#include <stdio.h>

void swap(long long *x, long long *y) {
	long long temp = *x;
	*x = *y;
	*y = temp;
}

int partition(long long A[], int left, int right) {
	long long pivot = A[right];
	int i = left-1;
	
	for(int j = left; j < right; j++) {
		if(A[j] < pivot) {
			i++;
			swap(&A[i], &A[j]);
		}
	}
	
	i++;
	swap(&A[i], &A[right]);
	return i;
} 

void quicksort(long long A[], int left, int right) {
	if(left < right) {
		int pIndex = partition(A, left, right);
		
		quicksort(A, left, pIndex-1);
		quicksort(A, pIndex+1, right); 
	}
}

int binarySearch(long long A[], int left, int right, long long find){
	while(left <= right) {
		int mid = left + ((right-left)/2);
		
		if(A[mid] == find) {
			return mid+1;
		} else if(A[mid] < find) {
			left = mid+1;
		} else {
			right = mid-1;
		}
	}
	return -1;
}

int main() {
	int N;
	scanf("%d", &N);
	
	long long A[N];
	for(int i = 0; i < N; i++) {
		scanf(" %lld", &A[i]);
	}
	
	quicksort(A, 0, N-1);
	
	int Q;
	scanf(" %d", &Q);
	
	long long X;
	for(int i = 0; i < Q; i++) {
		scanf(" %lld", &X);
		int loc = binarySearch(A, 0, N-1, X);
		
		printf("%d\n", loc);
	}
}
