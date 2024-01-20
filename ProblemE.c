#include <stdio.h>

int main(){
	int T; //testcases
	
	scanf("%d", &T); //input T number of cases
	
	int i;
	for(i = 1; i <= T; i++){
		int K; //packs needed
		int N; //packs have
		int M; //packs left at store
		
		scanf("%d %d %d", &K, &N, &M); //input numbers for each cases
		
		int result; //storing the result
		
		if((M + N) < K, K == (M + N)){
			result = 1;
		} else{
			result = 0;
		}
		
		if(result == 1){
			printf("Case #%d: no\n", i);
		} else{
			printf("Case #%d: yes\n", i);
		}
	}
	
	return 0;	
}
