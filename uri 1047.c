#include <stdio.h>
#include <stdlib.h>

int main()
{
    int h1,h2,m1,m2,h,m;
    scanf("%d %d %d %d",&h1,&m1,&h2,&m2);
    h=h2-h1;
    m=m2-m1;
    if(h<=0){
        h+=24;
    }
    if(m<0){
        m+=60;
        h--;
    }
    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",h,m);

    return 0;
}
