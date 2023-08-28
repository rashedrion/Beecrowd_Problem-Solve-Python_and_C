#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,i,b,j;
    scanf("%d %d",&a,&b);
    if(a<b){
        if(a>1 && a<20 && b<100000){
             for(i=0;i<b;){
                printf("%d",++i);
                for(j=0;j<a-1;j++){
                    if(i<b)
                        printf(" %d",++i);
                }
                printf("\n");
            }
        }
    }
    return 0;
}
