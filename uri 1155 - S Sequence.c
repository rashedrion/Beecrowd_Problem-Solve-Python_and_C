#include <stdio.h>
#include <stdlib.h>

int main()
{
    double S=0.0,a;
    int n=1;
    while(n<=100){
        a=1.0/(double)n;
        S+=a;
        n++;
    }

    printf("%.2lf\n",S);
    return 0;
}
