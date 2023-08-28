#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,test=0,i=0,g=0,d=0,j;

    do{
        test++;
        scanf("%d %d",&a,&b);
        if(a>b)
            i++;
        else if(a<b)
            g++;
        else
            d++;
       printf("Novo grenal (1-sim 2-nao)\n");
       scanf("%d",&j);
    }while(j!=2);
    printf("%d grenais\n",test);
    printf("Inter:%d\n",i);
    printf("Gremio:%d\n",g);
    printf("Empates:%d\n",d);
    if(i>g)
        printf("Inter venceu mais\n");
    else if(g>i)
        printf("Gremio venceu mais\n");
    else
        printf("Não houve vencedor\n");

    return 0;
}
