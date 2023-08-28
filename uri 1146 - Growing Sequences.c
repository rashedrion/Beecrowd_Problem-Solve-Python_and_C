#include <stdio.h>
#include <stdlib.h>

int main()
{
    int X,i;
    do{
        scanf("%d",&X);
        if(X!=0){
            printf("1");
            for(i=2;i<=X;i++)
                printf(" %d",i);
            printf("\n");
        }
    }while(X!=0);
    return 0;
}
