#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,z,sum=0,c=0;
    scanf("%d",&x);
    scanf("%d",&z);
    while(z<=x)
        scanf("%d",&z);
    while(sum<=z){
        sum+=x;
        x++;
        c++;
    }
    printf("%d\n",c);

    return 0;
}
