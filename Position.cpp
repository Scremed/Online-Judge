#include <stdio.h>

int binarySearch(long long A[], long long l, long long r, long long find) {
	if(l <= r) {
		long long mid = l + (r-l)/2;
		if(A[mid] == find && (A[mid] > A[mid-1] || mid == 0)) {
			return mid;
		} else if(A[mid] < find) {
			return binarySearch(A, mid+1, r, find);
		} else {
			return binarySearch(A, l, mid-1, find);
		}
	}
	
	return -1;
}

int main() {
	int N, M;
	scanf("%d %d", &N, &M);
	
	long long A[N];
	for(int i = 0; i < N; i++) {
		scanf("%lld", &A[i]);
	}
	
	long long Q[M];
	for(int j = 0; j < M; j++) {
		scanf("%lld", &Q[j]);
	}
	
	for(int i = 0; i < M; i++) {
		int position = binarySearch(A, 0, N-1, Q[i]);
		if(position != -1) {
			printf("%d\n", position + 1);
		} else {
			printf("-1\n");
		}
	}
	return 0;
}
