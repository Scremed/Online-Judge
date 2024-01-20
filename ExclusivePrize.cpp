#include <stdio.h>

int main() {
	int T; //total prize
	int mode, count, maxCount = 0; //mode 
	scanf("%d", &T);
	int i, j, a[T];
	
	for(int i = 0; i < T; i++) {
		scanf("%d", &a[i]);
	}
	
	for (i = 0; i < T; ++i) {
		int count = 0;
		 
		for (j = 0; j < T; ++j) {
		    if (a[j] == a[i])
		    ++count;
		}
		if (count > maxCount) {
        	maxCount = count;
		}
	}
	printf("%d\n", maxCount);
	
	return 0;
}
