#include <stdio.h>

void check(char map[][101],int X,int Y,char search);
void change (char map[][101],int x, int y);
int main(){
    int tc,X,Y;
    char searching='S';
    scanf("%d",&tc);getchar();
    for(int i=1;i<=tc;i++){
        scanf("%d %d",&X,&Y);getchar();
        char map[X][Y];
        for (int j=0;j<X;j++){
        scanf("%s",map[j]);
        }
        // for(int k=0;k<X;k++){
            
        //     printf("%s\n",map[k]);
            
            
        // }
        check(map,X,Y,searching);
        for(int k=0;k<X;k++){
            for (int l=0;l<Y;l++){
                printf("%c",map[k][l]);
            }
            printf("\n");
        }

    }
     
}

void check(char map[][101],int X, int Y,char search){
    // char find='*';
    // int flag=1;
    // for(int i=0;i<X;i++){
    //     for (int j=0;j<Y;j++){
    //         if(map[i][j]=='.'){
    //             flag=0;
    //         }
    //     }
    // }
    // while (flag==0){
    for(int i=0;i<X;i++){
        for (int j=0;j<Y;j++){
            if (map[i][j]=='S'){
                printf("Found at: %d %d\n",i,j);
                if(map[i][j+1]=='.'){
                    map[i][j+1]='*';
                    change(map,i,j+1);
                }
                
                if(map[i+1][j]=='.'){
                    map[i+1][j]='*';
                    change(map,i+1,j);
                }
                if(map[i][j-1]=='.'){
                    map[i][j-1]='*';
                    change(map,i,j-1);
                }
                if(map[i-1][j]=='.'){
                    map[i-1][j]='*';
                    change(map,i-1,j);
                }
                
                
        } printf("%d %d\n",i,j);
    }
    }
}


void change(char map[][101],int i, int j){
    if (map[i][j]=='*'){
                if(map[i][j+1]=='.'){
                    map[i][j+1]='*';
                    change(map,i,j+1);
                }
                
                if(map[i+1][j]=='.'){
                    map[i+1][j]='*';
                    change(map,i+1,j);
                }
                if(map[i][j-1]=='.'){
                    map[i][j-1]='*';
                    change(map,i,j-1);
                }
                if(map[i-1][j]=='.'){
                    map[i-1][j]='*';
                    change(map,i-1,j);
                }
}
}
