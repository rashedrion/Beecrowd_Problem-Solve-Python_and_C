#include <stdio.h>
#include <stdlib.h>

int main()
{
    double M[12][12],s=0.0;
    int i,j,a,b;
    char c;
    scanf("%c",&c);
    for(i=0;i<12;i++){
        for(j=0;j<12;j++){
            scanf("%lf",&M[i][j]);
        }
    }
    a=5;
    b=7;
    for(i=7;i<12;i++){
        for(j=a;j<b;j++)
            s+=M[i][j];
        a--;
        b++;
    }
    if(c=='S')
        printf("%.1lf\n",s);
    if(c=='M')
        printf("%.1lf\n",s/30.0);


    return 0;
}
