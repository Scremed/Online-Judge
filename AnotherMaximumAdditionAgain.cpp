#include <stdio.h>

int longestSegment(long long A[], int N, long long M) {
    int allGreaterThanM = 1;
    for (int i = 0; i < N; i++) {
        if (A[i] <= M) {
            allGreaterThanM = 0;
            break;
        }
    }

    if (allGreaterThanM) {
        return -1;
    }
	
	int maxLength = 0;
    long long currentSum = 0;
    int start = 0;

    for (int end = 0; end < N; end++) {
        currentSum += A[end];

        while (currentSum > M) {
            currentSum -= A[start];
            start++;
        }

        int currentLength = end - start + 1;
        if (currentLength > maxLength && currentSum <= M) {
            maxLength = currentLength;
        }
    }

    return maxLength;
}

int main() {
    int N;
    scanf("%d", &N);

    long long A[N];
    for(int i = 0; i < N; i++) {
        scanf("%lld", &A[i]);
    }
    
    int Q;
    scanf("%d", &Q);
    
    for(int i = 0; i < Q; i++) {
    	long long M;
    	scanf("%lld", &M);
    	
    	int segment = longestSegment(A, N, M);

	    if (segment != -1) {
	        printf("Case #%d: %d\n", i + 1, segment);
	    } else {
	        printf("Case #%d: -1\n", i + 1);
	    }
	}

    return 0;
}

