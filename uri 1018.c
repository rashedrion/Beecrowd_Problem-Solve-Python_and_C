#include <stdio.h>
 
int main() {
 
    int a=100,b=50,c=20,d=10,e=5,f=2,g=1,h,i,j;
    scanf("%d",&h);
    if(h>0 && h<1000000){
        printf("%d\n",h);
        i=h/a;
        printf("%d nota(s) de R$ 100,00\n",i);
        h-=(i*a);
        i=h/b;
        printf("%d nota(s) de R$ 50,00\n",i);
        h-=(i*b);
        i=h/c;
        printf("%d nota(s) de R$ 20,00\n",i);
        h-=(i*c);
        i=h/d;
        printf("%d nota(s) de R$ 10,00\n",i);
        h-=(i*d);
        i=h/e;
        printf("%d nota(s) de R$ 5,00\n",i);
        h-=(i*e);
        i=h/f;
        printf("%d nota(s) de R$ 2,00\n",i);
        h-=(i*f);
        i=h/g;
        printf("%d nota(s) de R$ 1,00\n",i);

    }
 
    return 0;
}
