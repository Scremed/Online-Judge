#include <stdio.h> 

int main() {
	int  T; //testcases
	scanf("%d", &T);
	
	for(int i = 0; i < T; i++) {
		long long K, distance = 0, jump = 0; 
		scanf("%lld", &K);
		
		while(distance < K){
			jump += 1;
			distance += jump;
		}
		
		printf("Case #%d: %lld\n", i + 1, jump);
	}
	return 0;
}
