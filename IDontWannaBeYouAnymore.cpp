#include <stdio.h>
#include <string.h>

int main() {
	int T, N;
	scanf("%d", &T);
	
	for(int i = 0; i < T; i++) {
		scanf(" %d", &N); getchar();
		
		char limiter[] = " 1234567890#$%^&*'\"-";
		char S[N];
		scanf("%[^\n]s", S); getchar();
		char *str = strtok(S, limiter); 
		
		
		printf("Case #%d: ", i + 1);
		while(str != NULL) {
			printf("%s", str);
			str = strtok(NULL, limiter);
		}
		printf("\n");
	}
}
