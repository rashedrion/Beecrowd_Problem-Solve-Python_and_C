#include <stdio.h>
#include <stdlib.h>

int main()
{
    double a[6],sum=0.0,r;
    int i,j=0;
    scanf("%lf %lf %lf %lf %lf %lf",&a[0],&a[1],&a[2],&a[3],&a[4],&a[5]);
    for(i=0;i<6;i++){
        if(a[i]>=0.00){
            j++;
            sum = sum + a[i];
        }
    }
    r=sum / (float)j;
    printf("%d valores positivos\n",j);
    printf("%.1lf\n",r);
    return 0;
}
