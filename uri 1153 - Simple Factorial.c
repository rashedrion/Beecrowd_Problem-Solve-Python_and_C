#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b=1;
    scanf("%d",&a);
    while(a>=1){
       b*=a;
       a--;
    }
    printf("%d\n",b);


    return 0;
}
