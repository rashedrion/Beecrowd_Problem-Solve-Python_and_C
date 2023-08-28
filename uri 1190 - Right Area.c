#include <stdio.h>
#include <stdlib.h>

int main()
{
    double M[12][12],s=0.0;
    int i,j;
    char c;
    scanf("%c",&c);
    for(i=0;i<12;i++){
        for(j=0;j<12;j++){
            scanf("%lf",&M[i][j]);
            if(j>i && j>11-i)
                s+=M[i][j];
        }
    }
    if(c=='S')
        printf("%.1lf\n",s);
    if(c=='M')
        printf("%.1lf\n",s/30.0);


    return 0;
}
