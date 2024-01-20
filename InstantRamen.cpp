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
		
		if(K <= N + M){
			result = 0;
		} else{
			result = 1;
		}
		
		if(result == 0){
			printf("Case #%d: yes\n", i);
		} else{
			printf("Case #%d: no\n", i);
		}
	}
	
	return 0;	
}
