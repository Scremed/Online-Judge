#include <stdio.h>

int main() {
	int N, count = 0;
	scanf("%d", &N);
	int c[N], v[N], s[N]; //waktu klarifikasi dikirim, waktu terjawab, waktu melihat permintaan 
	
	for(int i = 0; i < N; i++) {
		scanf("%d %d %d", &c[N], &v[N], &s[N]);
		
		if(v[N] > s[N] && v[N] > c[N]) {
			count++;
		}
	}
	printf("%d\n", count);
	
	return 0;
}
