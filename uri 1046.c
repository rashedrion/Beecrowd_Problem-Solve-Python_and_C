#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,temp;
    scanf("%d %d",&a,&b);
    if(a==b)
        temp=24;
    else if(a>b)
        temp=(24-a)+b;
    else
        temp=b-a;
    printf("O JOGO DUROU %d HORA(S)\n",temp);

    return 0;
}
