#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,i,l=1;
    scanf("%d",&a);
    for(i=0;i<a;i++){

        printf("%d %d %d PUM\n",l,l+1,l+2);
        l+=4;
    }
    return 0;
}
