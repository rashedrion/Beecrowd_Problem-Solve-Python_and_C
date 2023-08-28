#include <stdio.h>
#include <stdlib.h>

int main()
{
    int X,i;
    scanf("%d",&X);
    if(X>=1 && X<=1000){
        for(i=1;i<=X;i+=2){
            printf("%d\n",i);
        }
    }
    return 0;
}
