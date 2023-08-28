#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N,i,b;
    scanf("%d",&N);
    for(i=0;i<N;i++){
        scanf("%d",&b);
        if(b==0)
            printf("NULL\n");
        else{
            if( (b%2)==0 && b>0)
                printf("EVEN POSITIVE\n");
            if( (b%2)==0 && b<0)
                printf("EVEN NEGATIVE\n");
            if( (b%2)!=0 && b<0)
                printf("ODD NEGATIVE\n");
            if( (b%2)!=0 && b>0)
                printf("ODD POSITIVE\n");
        }
    }
    return 0;
}
