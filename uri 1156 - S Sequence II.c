#include <stdio.h>
#include <stdlib.h>

int main()
{
    double S=0.0,a,b=1.0,c=1;
    while(b<=39.0){
        a=b/c;
        S+=a;
        b+=2.0;
        c*=2.0;
    }
    printf("%.2lf\n",S);
    return 0;
}
