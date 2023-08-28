#include <stdio.h>
#include <stdlib.h>

int main()
{
    float M[12][12],s=0.0;
    int i,j,a;
    char c;
    scanf("%c",&c);
    for(i=0;i<12;i++){
        for(j=0;j<12;j++){
            scanf("%f",&M[i][j]);
        }
    }
    a=11;
    for(i=0;i<12;i++){
        for(j=0;j<a;j++)
            s+=M[i][j];
        a--;
    }
    if(c=='S')
        printf("%.1f\n",s);
    if(c=='M')
        printf("%.1f\n",s/66.0);


    return 0;
}
