#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N,a,i,total=0,c=0,r=0,s=0;
    char b;
    double cc,rr,ss;
    scanf("%d",&N);
    for(i=0;i<N;i++){
        scanf("%d %c",&a,&b);
        total+=a;
        if(b=='C')
            c+=a;
        if(b=='R')
            r+=a;
        if(b=='S')
            s+=a;

    }
    cc= (double)(c*100.00)/(double)total;
    ss= (double)(s*100.00)/(double)total;
    rr= (double)(r*100.00)/(double)total;
    printf("Total: %d cobaias\n",total);
    printf("Total de coelhos: %d\n",c);
    printf("Total de ratos: %d\n",r);
    printf("Total de sapos: %d\n",s);
    printf("Percentual de coelhos: %.2lf %\n",cc);
    printf("Percentual de ratos: %.2lf %\n",rr);
    printf("Percentual de sapos: %.2lf %\n",ss);


    return 0;
}
