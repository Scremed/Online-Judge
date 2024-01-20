#include <stdio.h>

int main(){
    int N, M;

    printf("Enter two number separated by a space: \n");
    scanf("%d %d", &N, &M);
    
    int i = N;
    while (i < N + M) {
        printf("%d\n", i);
        i++;
    }

    return 0;
}