#include <stdio.h>
 
int main() {
    int a=365,b=30,c,d,e;
    scanf("%d",&c);
    d=c/a;
    c-=(a*d);
    e=c/b;
    c-=(b*e);
    printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n",d,e,c);
 
    return 0;
}
