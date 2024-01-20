#include<stdio.h>
#include<math.h>
#define MOD 1000000007
int main()
{
    long long int num;
    scanf("%lld",&num);
    unsigned long long int total=1;
    for(int i=1;i<=num;i++){
        total =1;
        if(i==1){
            total=1;
        }
        else {
            total=total*(i*i)*(pow(6,i-1)*pow(10,i-2));
        }
        if (total>=MOD){total%=MOD;break;}

    }
printf("%llu\n",total);
return 0;    
}
