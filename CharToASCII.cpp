#include <stdio.h>
#include <string.h>

int main() {
	int T; //testcase
	scanf("%d", &T);
	
	for(int i = 0; i < T; i++) {
		char str[1001];
		scanf("%s", str);
		
		printf("Case %d: ", i+1);
		
		int length = strlen(str);
		for(int j = 0; j < length; j++) {
			if(j <= length - 2) {
				printf("%d-", str[j]);
			} else {
				printf("%d\n", str[j]);
			}
		}
	}
}
