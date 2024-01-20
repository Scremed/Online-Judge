#include <stdio.h>

int main() {
	int T;
	scanf("%d", &T);
	
	for(int i = 0; i < T; i++) {
		int N;
		long long K;
		scanf("%d %lld", &N, &K);
		
		//original character and converted character
		char strO[101], strC[101]; 
		scanf("%s", strO);
		
		for(int j = 0; j < N; j++) {
			//converts to decimal number and substract a to 0
			char strOChar = strO[j];
			int strONum = strOChar - 'a'; 
			
			long long strCNum = (strONum + K) % 26; 
			if(strCNum < 0){
				strCNum += 26;
			}
			char strCChar = (int) strCNum + 'a';
			
			strC[j] = strCChar;
		}
		strC[N] = '\0';
		
		printf("Case #%d: %s\n", i + 1, strC);
	}
	return 0;
}
