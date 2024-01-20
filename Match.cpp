#include <stdio.h>

int main() {
	int T; //testcase
	scanf("%d", &T);
	
	for(int i = 0; i < T; i++)
	{
		int N; //amount of numbers
		scanf("%d", &N);
		
		int n[N+1]; //list of numbers
		for(int j = 1; j <= N; j++) {
			scanf(" %d", &n[j]);
		}
		
		int B,L; //Bibi's and Lili's location guess
		scanf("%d %d", &B, &L);
		
		
		if(n[B] > n[L]) { //if bibi's got bigger num, bibi wins
			printf("Case #%d : Bibi\n", i+1);
		} else if(n[L] > n[B]){
			printf("Case #%d : Lili\n", i+1);
		} else {
			printf("Case #%d : Draw\n", i+1);
		}
	}
}
