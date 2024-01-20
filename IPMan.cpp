#include <stdio.h>
#include <string.h>

bool all_num_or_dot(char s[]) {
	int n = strlen(s);
	
	for(int i = 0; i < n; i++) {
		if('0' <= s[i] && s[i] <= '9')continue;
		if(s[i] == '.')continue;
		
		return false;
	}
	
	return true;
}

int number_of_dot(char s[]) {
	int n = strlen(s);
	int sum = 0;
	
	for(int i = 0; i < n; i++) {
		if(s[i] == '.') sum++;
	}
	
	return sum;
}

bool pos_dot(char s[]) {
	int n = strlen(s);
	
	if(s[0] == '.' || s[n-1] == '.') return false;
	
	for(int i = 0; i < n-1; i++) {
		if(s[i] == '.' && s[i+1] == '.') return false;
	}
	
	return true;
}

void solve() {
	char s[200];
	scanf("%s", s);
	
	if(all_num_or_dot(s) == true && number_of_dot(s) == 5 && pos_dot(s) == true) {
		printf("YES\n");
	} else {
		printf("NO\n");
	}
	
	return;	
}

int main() {
	int T;
	scanf("%d", &T);
	
	for(int i = 0; i < T; i++) {
		printf("Case #%d: ", i + 1);
		solve();
	}
	
	return 0;
} 
