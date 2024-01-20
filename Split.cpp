#include <stdio.h>
#include <stdbool.h>

int main() {
	int T;
	scanf("%d", &T);
	
	for(int i = 0; i < T; i++) {
		int n, total = 0, numbers, arrays[100000]={0};
		scanf("%d", &n); 
		
		for(int j = 0; j < n; j++) {
			scanf("%d", &numbers);
			total += numbers;
			arrays[j] = total;
		}
		
		bool flag = false;
		for(int j = 0; j < n - 1; j++) {
			if(arrays[j] == (arrays[n-1] - arrays[j])) {
				flag = true;
				break;
			}
		}	
			
		if(flag == true) {
			printf("Case #%d: Yes\n", i+1);	
		} else {
			printf("Case #%d: No\n", i+1);
		}
	}
	
	return 0;
}
