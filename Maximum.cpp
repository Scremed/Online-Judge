#include <stdio.h>

int main() {
	int T; //testcase
	scanf("%d", &T);
	
	for(int i = 0; i < T; i++) {
		int N;
		scanf("%d", &N);
		
		long long n[N];
		for(int j = 0; j < N; j++) {
			scanf(" %lld", &n[j]);
		}
		
		long long max1, max2;
		max1 = n[0]; //set to first num
		max2 = n[1]; //second
		
		for(int j = 0; j < N; j++) {
			if(n[j] > max1 && n[j] != n[1]) { //put max1 to max2 and put new max num to max1
				max2 = max1;
				max1 = n[j];
			} else if(n[j] > max2 && n[j] != n[0]) { //if there's two same max num
				max2 = n[j];
			}
		}
		
		long long maxSum = max1 + max2; 
		
		printf("Case #%d: %lld\n", i+1, maxSum);
	}
}
