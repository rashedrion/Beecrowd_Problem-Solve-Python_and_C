#include <stdio.h>
#include <stdlib.h>

int main()
{
    int t,i=0,j=0,n[1000];
    scanf("%d",&t);
    for(i=0;i<1000;i++){
        n[i]=j;
        j++;
        if(j==t)
            j=0;
    }
    for(i=0;i<1000;i++){
        printf("N[%d] = %d\n",i,n[i]);
    }
    return 0;
}
