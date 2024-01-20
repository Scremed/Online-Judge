#include <stdio.h>

int main() {
    int x, y, k;
    scanf("%d %d %d", &x, &y, &k);

    if ((x <= k) && (y>=k)) {
        int ans;

        if (x < k) {
            ans = k - x;
    	} else {
    		ans = y - k;
		}
        printf("%d\n", ans);
    }
    else{
        printf("-1\n");
    }

    return 0;
}
