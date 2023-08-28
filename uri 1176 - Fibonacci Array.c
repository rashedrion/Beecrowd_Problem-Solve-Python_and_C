#include <stdio.h>
#include <stdlib.h>

int main()
{
    long long int a,i;
    int n;
    scanf("%d",&n);
    while(n>0){
        n--;
        scanf("%lld",&a);
        long long int d[a+1];
        for(i=0;i<=a;i++){
            if(i<=1){
                d[i]=i;
            }
            else{
                d[i]= d[i-1]+d[i-2];
            }
        }
        printf("Fib(%lld) = %lld\n",a,d[a]);
    }

    return 0;
}
