#include <stdio.h>
 
int main() {
 
    int a=60,b,c,d;
    scanf("%d",&b);
    c=b/(a*a);
    b-=(a*a*c);
    d=b/a;
    b-=(a*d);
    printf("%d:%d:%d\n",c,d,b);
 
    return 0;
}
