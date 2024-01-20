#include <stdio.h>

int main() {
	int T;
	scanf("%d", &T);
	int N, X; //book pages, go to page
	
	for(int i = 0;i < T; i++) {
		int flip = 0;
		scanf("%d %d", &N, &X);
		int pageL= N, pageF = 1;//last page front page
		
		if(pageL % 2 == 0) pageL++;
		if(X % 2 == 0) X++;
		
		int ans1 = (X-1)  / 2;
		int ans2 = (pageL - X) / 2;
		
		int ans;
		if(ans1 >= ans2){
			ans = ans2;
		} else{
			ans = ans1;
		}
		
		printf("Case #%d: %d\n", i + 1, ans);
	}
	
	return 0;
}
