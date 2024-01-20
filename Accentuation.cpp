#include <stdio.h>
#include <string.h>

int main() {
	int T;
	scanf("%d", &T); getchar();
	
	
	for(int i = 0; i < T; i++) {
		char S[105];
		scanf("%[^\n]s", S);
		
		int s = strlen(S);
		char X; getchar();
		scanf("%c", &X); 
		
		for(int i = 0; i < s; i++) {
			if(S[i] == X) {
				if(X >= 'A' && X <= 'Z') {
					S[i] += 32;
				} 
				if(X >= 'a' && X <= 'z') {
					S[i] -= 32;
				}
			}
		}
		
		for(int i = 0; i < s; i++) {
			printf("%c", S[i]);
		}
		printf("\n");
		getchar();
	}
	
	return 0;
}
