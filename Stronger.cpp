#include <stdio.h>

int main(){
	long long int A, total=0;
	int bd=100, bonus=0;
	
	scanf("%lld", &A);
	
	for(int i=0; i<A; ++i){
		total += bd + bonus;
		bonus += 50;	
	}
		
	printf("%lld\n", total);
		
	return 0;
}
