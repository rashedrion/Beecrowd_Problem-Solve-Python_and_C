#include <stdio.h>
#include <stdlib.h>

int main()
{
    double os,ne,pe;
    int p;
    scanf("%lf",&os);
    if(os>=0.00 && os<=400.00){
        p=15;
        pe=os*0.15;
        ne=os+pe;
    }
    else if(os>=400.01 && os<=800.00){
        p=12;
        pe=os*0.12;
        ne=os+pe;
    }
    else if(os>=800.01 && os<=1200.00){
        p=10;
        pe=os*0.10;
        ne=os+pe;
    }
    else if(os>=1200.01 && os<=2000.00){
        p=7;
        pe=os*0.07;
        ne=os+pe;
    }
    else{
        p=4;
        pe=os*0.04;
        ne=os+pe;
    }
    printf("Novo salario: %.2lf\nReajuste ganho: %.2lf\nEm percentual: %d %%\n",ne,pe,p);
    return 0;
}
