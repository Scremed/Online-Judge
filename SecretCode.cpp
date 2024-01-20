#include <stdio.h>
#include <string.h>

void reverse(char *str, int A, int B) {
	char temp;
	while(A < B) {
		temp = str[A];
		str[A] = str[B];
		str[B] = temp;	
		A++;
		B--;
	}
}

int main () {
	int T; //testcase
	scanf("%d", &T);
	
	for(int i = 0; i < T; i++) {
		char str[1005];
		int Q;
		scanf("%d", &Q);
		scanf(" %s", str);
		
		for(int j = 0; j < Q; j++) {
			int A, B;
			scanf("%d %d", &A, &B);
			
			reverse(str, A-1, B-1);
		}
		
		printf("Case #%d: %s\n", i+1, str);
	}
}
