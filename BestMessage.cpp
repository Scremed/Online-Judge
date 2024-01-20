#include <stdio.h>
#include <string.h>

int main() {
	int T; //testcase
	scanf("%d", &T);
	
	for(int i = 0; i < T; i++) {
		char str[1001];
		scanf("%s", str);
		
		int length = strlen(str);
		int count[1001] = {0};
		for(int j = 0; j < length; j++) { 
			char c = str[j];
			if (c != 'A' && c != 'E' && c != 'I' && c != 'O' && c != 'U') {
                while (c != 'A' && c != 'E' && c != 'I' && c != 'O' && c != 'U') {
                    str[j]--;
                    c = str[j];
                    count[j]++;
                }
            }
		}
		
		printf("Case #%d:\n", i+1);
		printf("%s\n", str);
		for(int  j = 0; j < length; j++){
			printf("%d", count[j]);
		}
		printf("\n");
	}
	return 0;
}
