#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N,i;
    double a,b,c,aa=2.0,bb=3.0,cc=5.0,r;
    scanf("%d",&N);
    for(i=1;i<=N;i++){
        scanf("%lf %lf %lf",&a,&b,&c);
        r=((a*aa)+(b*bb)+(c*cc))/(aa+bb+cc);
        printf("%.1lf\n",r);
    }
    return 0;
}
