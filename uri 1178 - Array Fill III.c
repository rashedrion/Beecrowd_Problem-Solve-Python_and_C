#include <stdio.h>
#include <stdlib.h>

int main()
{
    double t,n[100];
    int i;
    scanf("%lf",&t);
    for(i=0;i<100;i++){
        n[i]=t;
        t=t/2.00;
    }
    for(i=0;i<100;i++){
        printf("N[%d] = %.4lf\n",i,n[i]);
    }
    return 0;
}
