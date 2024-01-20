#include <stdio.h>
#include <string.h>

int isPalindrome(char str[], int left, int right) {
	if(left >= right) {
		return 1; //true
	}
	
	if(str[left] == str[right]) {
		return isPalindrome(str, left+1, right-1);
	} else {
		return -1; //false
	}
}

int main() {
	int T;
	scanf("%d", &T);
	getchar();
	
	for(int i = 0; i < T; i++) {
		char str[1005] = {0};
		scanf("%s", str);
		
		int len = strlen(str);
		int isPal = isPalindrome(str, 0, len-1);
		
		if(isPal == 1) {
			printf("Case #%d: yes\n", i+1);
		} else {
			printf("Case #%d: no\n", i+1);
		}
	}
	
	return 0;
}
