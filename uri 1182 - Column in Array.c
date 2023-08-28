#include <stdio.h>
#include <stdlib.h>

int main()
{
    float M[12][12],s=0.0;
    int a,i,j;
    char c;
    scanf("%d %c",&a,&c);
    for(i=0;i<12;i++){
        for(j=0;j<12;j++){
            scanf("%f",&M[i][j]);
            if(j==a)
                s+=M[i][j];
        }
    }
    if(c=='S')
        printf("%.1f\n",s);
    if(c=='M')
        printf("%.1f\n",s/12.0);


    return 0;
}
