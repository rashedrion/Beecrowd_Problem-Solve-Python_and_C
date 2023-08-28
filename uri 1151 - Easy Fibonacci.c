#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,frist=0,second=1,next,i;
    scanf("%d",&a);
    printf("0");
    for(i=1;i<a;i++){
        if(i==1){
            printf(" %d",i);
        }
        else{
            next= frist+second;
            frist=second;
            second=next;
            printf(" %d",next);
        }
    }
    printf("\n");


    return 0;
}
