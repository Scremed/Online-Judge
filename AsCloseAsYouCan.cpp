#include <stdio.h>

long long findSum(long long sum[], long long A[], int left, int right, long long find) {
	int result = -1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (sum[mid] <= find) {
            left = mid + 1;
			result = mid;
        } else {
            right = mid - 1;
        }
    }

    return result;
}

int main() {
	int N;
	scanf("%d", &N);
		
	long long A[N];
	for(int i = 0 ; i < N; i++) {
		scanf("%lld", &A[i]);
	}
	
	long long sum[N];
	sum[0] = A[0];
    for (int i = 1; i < N; i++) {
        sum[i] = sum[i - 1] + A[i];
    }
    
	int Q;
	scanf("%d",&Q);
	
	for(int i = 0; i < Q; i++) {
		long long M;
		scanf("%lld", &M);
		
		int idx = findSum(sum, A, 0, N-1, M);
		
		if(idx != -1) {
			printf("Case #%d: %d\n", i+1, idx+1);
		} else {
			printf("Case #%d: -1\n", i+1);
		}
	}
	
	return 0;
}
