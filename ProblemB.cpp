#include <stdio.h>

int main(){
	int N, M;
	
	scanf("%d %d", &N, &M);
	
	int i = N;
	
	while(i<M+N+1){
		printf("%d\n", i);
		i = i+1;
	}
	return 0;
}
