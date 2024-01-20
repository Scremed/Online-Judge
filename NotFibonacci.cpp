#include <stdio.h>

int notFibo(int x, int y, int n) {
	if(n==0){
		return x;
	}
	if(n==1) {
		return y;
	}
	
	return notFibo(x,y,n-1) + notFibo(x,y,n-2);
}

int main() {
	int x,y,n;
	
	scanf("%d %d", &x, &y);
	scanf("%d", &n);
	
	int hasil = notFibo (x,y,n);
	
	printf("%d\n", hasil);
}
