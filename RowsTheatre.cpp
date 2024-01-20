#include <stdio.h>

void merge(long long A[], int low, int mid, int high) {
	int Lsize = mid+1 - low;
	int Rsize = high - mid;
	
	long long left[Lsize], right[Rsize];
	
	for(int i = 0; i < Lsize; i++) {
		left[i] = A[low + i];
	}
	for(int j = 0; j < Rsize; j++) {
		right[j] = A[mid+1+j];
	}
	
	int mainIdx = low, i = 0, j = 0;
	
	while(i < Lsize && j < Rsize) {
		if(left[i] < right[j]) {
			A[mainIdx++] = left[i++];
		} else {
			A[mainIdx++] = right[j++];
		}
	}
	
	while(i < Lsize) {
		A[mainIdx++] = left[i++];
	}
	while(j < Rsize) {
		A[mainIdx++] = right[j++];
	}
}

void mergesort(long long A[], int low, int high) {
	if(low >= high) return;
	
	int mid = low + (high-low) / 2;
		
	mergesort(A, low, mid);
	mergesort(A, mid+1, high);
	merge(A, low, mid, high);	
}

int main() {
	int T;
	scanf("%d", &T);
	
	for(int i = 0; i < T; i++) {
		int N;
		scanf("%d", &N);
		
		long long A[N];
		for(int j = 0; j < N; j++) {
			scanf("%lld", &A[j]);
		}
		
		mergesort(A, 0, N-1);
		
		int mid = N / 2;
        long long top[mid], bot[N - mid];

        for (int j = 0; j < mid; j++) {
            top[j] = A[j];
        }
        for (int j = mid; j < N; j++) {
            bot[j - mid] = A[j];
        }

        // Calculate max differences for each half
        long long maxDiffTop = 0, maxDiffBot = 0;
        for (int j = 1; j < mid; j++) {
            long long diff = top[j] - top[j - 1];
            if (diff > maxDiffTop) {
                maxDiffTop = diff;
            }
        }
        for (int j = 1; j < N - mid; j++) {
            long long diff = bot[j] - bot[j - 1];
            if (diff > maxDiffBot) {
                maxDiffBot = diff;
            }
        }

        // Compare and print the maximum of the two differences
        if (maxDiffTop >= maxDiffBot) {
            printf("Case #%d: %lld\n", i + 1, maxDiffTop);
        } else {
            printf("Case #%d: %lld\n", i + 1, maxDiffBot);
        }
	}
}
