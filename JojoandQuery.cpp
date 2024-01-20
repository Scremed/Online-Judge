#include <stdio.h>

int binarySearch(long long A[], int left, int right, long long find) {
	while (left <= right) {
		int mid = left + (right-left) / 2;
		
		if(find == A[mid]) {
			return mid;
		} else if(A[mid] < find) {
			left = mid+1;
		} else {
			right = mid-1;
		}
	}
	
	return -1;
}

int main() {
	int N, Q;
	scanf("%d %d", &N, &Q);
	
	long long A[N];
	for(int i = 0; i < N; i++) {
		scanf("%lld", &A[i]);
	}
	
	for(int i = 0; i < Q; i++) {
		long long find;
		scanf("%d", &find);
		
		int idx = binarySearch(A, 0, N-1, find);
		
		if(idx != -1) {
			printf("%d\n", idx+1);
		} else {
			printf("-1\n");
		}
	}
}
