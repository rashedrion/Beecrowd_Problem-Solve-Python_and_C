#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,temp,sum=0,i;
    scanf("%d %d",&a,&b);
    if(a>b){
        temp =a;
        a=b;
        b=temp;
    }
    for(i=a;i<=b;i++){
        if((i%13)!=0){
            sum+=i;
        }
    }
    printf("%d\n",sum);
    return 0;
}
