#include <stdio.h>
#include <stdlib.h>

int main()
{
    int d,dd,h,hh,m,mm,s,ss;
    char k[5];
    scanf("%s %d",k,&d);
    scanf("%d %s %d %s %d",&h,k,&m,k,&s);
    scanf("%s %d",k,&dd);
    scanf("%d %s %d %s %d",&hh,k,&mm,k,&ss);

    s=ss-s;
    m=mm-m;
    h=hh-h;
    d=dd-d;

    if(s<0){
        s+=60;
        m--;
    }
    if(m<0){
        m+=60;
        h--;
    }
    if(h<0){
        h+=24;
        d--;
    }
    printf("%d dia(s)\n%d hora(s)\n%d minuto(s)\n%d segundo(s)\n",d,h,m,s);

    return 0;
}
