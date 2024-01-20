#include <stdio.h>

void swap(long long A[], long long idx1, long long idx2) {
	long long temp = A[idx1];
	A[idx1] = A[idx2];
	A[idx2] = temp;
}

long long partition(long long A[], long long low, long long high) {
	long long pivot = A[high];
	
	long long i = low - 1;
	
	for(long long j = low; j < high; j++) {
		if(A[j] < pivot) {
			i++;
			swap(A, i, j);
		}
	}
	
	i++;
	swap(A, i, high);
	return i;
}

void quickSort(long long A[], long long low, long long high) {
	if(low >= high) return;
	
	long long partitionIdx = partition(A, low, high);
	quickSort(A, low, partitionIdx - 1);
	quickSort(A, partitionIdx + 1, high);
}

int main() {
	int N;
	scanf("%d", &N);
	
	long long A[N+5];
	for(int i = 0; i < N; i++) {
		scanf("%lld", &A[i]);
	}
	
	quickSort(A, 0, N - 1);
	
	int maxDiff = A[1] - A[0];
    for (int i = 0; i < N - 1; i++) {
        int diff = A[i + 1] - A[i];
        if(diff < 0) {
			diff *= -1;
		}
        if (diff > maxDiff) {
            maxDiff = diff;
        }
    }

	int k = 0;
	for(int i = 0; i < N-1; i++) {
		long long diff = A[i+1] - A[i];
//		printf("%lld %lld\n", A[i], A[i-1]);
//		printf("%lld ", diff);
		if(diff < 0) {
			diff *= -1;
		}
		if(maxDiff == diff && k == 0) {
			printf("%lld %lld", A[i], A[i+1]); 
			k++;
		} else if(maxDiff == diff && k > 0) {
			printf(" %lld %lld", A[i], A[i+1]);
		}
	}
	printf("\n");
	
	return 0;
}
