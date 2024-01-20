#include <stdio.h>
#include <string.h>

int main() {
	char a[51];
	
	scanf("%[^\n]s", a);
	
	int n = strlen(a);
	
	bool isPal = true;
    int j = n - 1;
    for(int i = 0; i < n/2; i++) {
        if(a[i] != a[j] && (a[i] != '_' && a[j] != '_' )) {
			isPal = false;
            break;
        }
        if(a[i] == '_' && a[j] == '_') {
        		isPal = false;
        		break;
			}
        j--;
    }
	
	if(isPal == true) {
		printf("Yes\n");
	} else {
		printf("No\n");
	}
	
	return 0;
}
