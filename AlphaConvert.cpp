#include <stdio.h>
int main(){
    FILE *fp = fopen("testdata.in","r");
    if (fp==NULL){
        printf("The file does not exist!");
    }
    int t;
    fscanf(fp, "%d", &t);
    while (t > 0){
        char name[100];
        fscanf(fp, "%s", name);
        int n;
        fscanf(fp, "%d", &n);
        char caps;
        int c[26] = {0};
        for (int i=0; i < n; i++){
            int j = 0;
            fscanf(fp, "%c", &caps);
            char a,b;
            fscanf(fp, "%c %c", &a, &b);
            c[a-65]++;
            while (name[j] != '\0'){
                if (name[j] == a && c[a-65] <= 1){
                    name[j] = b;
                }
                j++;
            }
        }
        int d[26] = {0};
        int j = 0;
        while (name[j] != '\0'){
            int z=name[j]-65;
            d[z]++;
            j++;
            c[j]++;
        }
        for (int i = 0; i < 26; i++){
            if (d[i] > 0){
                printf("%c %d\n", i+65, d[i]);
                d[i]=0;
            }
        }
        t--;
    }
    fclose(fp);
}
