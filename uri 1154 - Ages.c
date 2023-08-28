#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b=0,d=0;
    float c;
    scanf("%d",&a);
    while(a>=0){
        b+=a;
        d++;
        scanf("%d",&a);
    }
    c=(float)b/(float)d;
    printf("%.2f\n",c);
    return 0;
}
