#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N,a,b,i=0;
    float r;
    scanf("%d",&N);
    while(i<N){
        scanf("%d %d",&a,&b);
        if(b!=0){
            r=(float)a/(float)b;
            printf("%.1f\n",r);
        }
        else
            printf("divisao impossivel\n");
        i++;
    }
    return 0;
}
